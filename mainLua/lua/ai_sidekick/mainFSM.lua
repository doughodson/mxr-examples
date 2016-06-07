AI = require 'ai_sidekick/ai'

ai = AI:new()
LuaBehavior = {}

function LuaBehavior:LuaStateMachine( g_luaState )
    g_pMaAction = PlaneManeuverAction()
    g_pSyAction = PlaneSystemsAction()
    g_pStAction = PlaneStoresAction()
    
    ai.planeState = g_luaState
    
    if      ( ( g_luaState.isIncomingMissile == false ) and ( g_luaState.isTracking == false ) ) then
        transitions = { "T21", "T31" }
    elseif  ( ( g_luaState.isIncomingMissile == true  ) and ( g_luaState.isTracking == false ) ) then
        transitions = { "T13", "T23" }
    elseif  ( ( g_luaState.isIncomingMissile == false ) and ( g_luaState.isTracking == true  ) ) then
        transitions = { "T12" }
    elseif  ( ( g_luaState.isIncomingMissile == true  ) and ( g_luaState.isTracking == true  ) ) then
        transitions = { "T13", "T23" }
    end
    
    g_pMaAction, g_pSyAction, g_pStAction = ai.stateMachine:update( transitions )
    
    return g_pMaAction, g_pSyAction, g_pStAction
end