/*
   BurstS - Lightweight Microservice Application Server
   FILE: app.h

   -------------------------------------------------------------------
   (C) Copyright 2019 - Giancarlo Niccolai

   Licensed under the Apache 2.0 License.
*/

#ifndef BURSTS_APP_H
#define BURSTS_APP_H

/** Wrapper for the burst application.

*/
class BurstSApp {
public:

    BurstSApp() noexcept;
    BurstSApp(const BurstSApp &)=delete;
    BurstSApp(BurstSApp&& )=delete;

    ~BurstSApp();
    void init( int argc, char* argv[] );
    void usage();
    int run();

    static BurstSApp* get() { return m_theApp; }

private:
    static BurstSApp* m_theApp;
};

#endif

/* end of app.h */
