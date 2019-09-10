/*
   BurstS - Lightweight Microservice Application Server
   FILE: app.h

   -------------------------------------------------------------------
   (C) Copyright 2019 - Giancarlo Niccolai

   Licensed under the Apache 2.0 License.
*/

#include <app.h>
#include <stdexcept>
#include <cassert>
#include <iostream>

BurstSApp* BurstSApp::m_theApp = 0;
BurstSApp::BurstSApp() noexcept
{
    assert(m_theApp == 0);
    m_theApp = this;
    // Todo -- ready stuff.
}


BurstSApp::~BurstSApp()
{
    // TODO unready stuff
}



void BurstSApp::init( int argc, char* argv[] )
{
    // TODO read parameters
}

void BurstSApp::usage()
{
   std::cout << ( "Usage: \n"
      "BurstS [options]\n\n"
      "  Options:\n"
      "  -?          This help\n"
      "  -A <dir>    Directory where to place persistent application data.\n"
      "  -C <file>   Load this configuration file\n"
      "  -D <file>   Log debug level informations to the given file or path\n"
      "  -h <dir>    Sets this directory as site HTDOCS root\n"
      "  -i <addr>   Listen on the named interface (defaults to 0.0.0.0 - all)\n"
      "  -l <n>      Log level (0 min, 5 max)\n"
      "  -L <path>   Set this as the falcon load path\n"
      "  -p <port>   Listen on required port (deaults to 80)\n"
      "  -q          Be quiet (don't log on console)\n"
      "  -S          Do not log on syslog\n"
      "  -t <secs>   Set session timeout (defaults to 30)\n"
      "  -T <dir>    Use this as temporary path\n\n"
   );
}

int BurstSApp::run()
{
   while( true )
   {
      // TODO -- stuff
   }

   return 0;
}

/* end of app.cpp */

