#######################################################################
# Targets
#

# Inclusion settings
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# file(GLOB SRC_FILES *.cpp)
set(SRC_FILES main.cpp app.cpp)
file(GLOB HDR_FILES *.h)

ADD_EXECUTABLE( bursts 
   ${SRC_FILES}
   ${HDR_FILES} # optional but useful, see comment above.
)
set_property(TARGET bursts PROPERTY CXX_STANDARD 17)

if(UNIX OR MAC)
   set(SYS_SPECIFIC socket_sys_unix.cpp)

   # On Solaris, we need also socket lib
   if( "${CMAKE_SYSTEM_NAME}" STREQUAL "SunOS" )
      set(_syslibs 
         /lib/libsocket.so
         /lib/libnsl.so 
      )
   endif()

else()
   set(_syslibs
      ws2_32
   )
endif()


TARGET_LINK_LIBRARIES( bursts
   ${_syslibs}
) 

INSTALL(TARGETS bursts
   RUNTIME DESTINATION bin
)
