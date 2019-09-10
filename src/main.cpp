/*
   BurstS - Lightweight Microservice Application Server
   FILE: main.cpp

   -------------------------------------------------------------------
   (C) Copyright 2019 - Giancarlo Niccolai

   Licensed under the Apache 2.0 License.
*/

#include <iostream>
#include <string>
#include <app.h>

int main(int argc, char* argv[])
{
    BurstSApp theApp;

    try
    {
        theApp.init( argc, argv );
        return theApp.run();
    }
    catch ( const std::runtime_error& error )
    {
        std::cerr << "burst: Terminating with uncaught exception - "
            << error.what();
    }

    return 0xff;
}

/* End of main.cpp */
