--------------------------------------------------------------------------------
-- creating the example libraries
--------------------------------------------------------------------------------

    --  eXample UBF behaviors library
    project "libxbehaviors"
      kind "StaticLib"
      targetname "xbehaviors"
      targetdir (MIXR_ExamplesLibPath)
      includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
      files {
         "../../shared/src/xbehaviors/*.h*",
         "../../shared/src/xbehaviors/*.cpp",
      }
      defines { "_LIB" }

    --  eXample library that extends the data recorder
    project "libxrecorder"
      kind "StaticLib"
      includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
      targetname "xrecorder"
      targetdir (MIXR_ExamplesLibPath)
      files {
         "../../shared/src/xrecorder/**.h*",
         "../../shared/src/xrecorder/**.cpp",
         "../../shared/src/xrecorder/**.cc",
         "../../shared/src/xrecorder/**.proto",
      }
      defines { "_LIB" }
      defines { "_SCL_SECURE_NO_WARNINGS" } -- suppress protocol buffer warning

    --  eXample Panel library -- common instrument panel code for several examples
    project "libxpanel"
      kind "StaticLib"
      targetname "xpanel"
      targetdir (MIXR_ExamplesLibPath)
      includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
      files {
         "../../shared/src/xpanel/*.h*",
         "../../shared/src/xpanel/*.cpp",
         "../../shared/src/xpanel/**.epp",
      }
      defines { "_LIB" }

    --  eXample ZeroMQ network handlers
    project "libxzmq"
      kind "StaticLib"
      targetname "xzmq"
      targetdir (MIXR_ExamplesLibPath)
      includedirs { MIXR_IncPath, MIXR_3rdPartyIncPath, MIXR_ExamplesIncPath }
      defines { "ZMQ_STATIC" }
      files {
         "../../shared/src/xzmq/*.h*",
         "../../shared/src/xzmq/*.cpp",
         "../../shared/src/xzmq/**.epp",
      }
      defines { "_LIB" }