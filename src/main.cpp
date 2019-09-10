/*
   BurstS - Lightweight Microservice Application Server
   FILE: main.cpp

   -------------------------------------------------------------------
   (C) Copyright 2019 - Giancarlo Niccolai

   Licensed under the Apache 2.0 License.
*/

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::cout << "Hello World\n";
    /*
    BurstsApp theApp;

    try
    {
        if ( theApp.init( argc, argv ) )
        {
            return theApp.run();
        }
        else
        {
            std::cerr << "burst: Cannot intialize application - "
                << theApp.error() << '\n';
        }
    }
    catch ( const std::runtime_error& error )
    {
        std::cerr << "burst: Terminating with uncaught exception - "
            << error.what();
    }

    return 0xff;
    */
}

/* End of main.cpp */
