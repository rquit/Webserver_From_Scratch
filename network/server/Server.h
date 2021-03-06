//
// Created by Nabil on 2/22/2022.
//

#ifndef WSLWEBSERVER_SERVER_H
#define WSLWEBSERVER_SERVER_H

#include <cstdio>
#include "SimpleServer.h"
#include <iostream>

namespace Nabil_Omi_WSL {

class Server : public SimpleServer {

public:
    Server(int domain, int service, int protocol, int port, int interface, int backlog_, std::string &HTMLResponse);
    void launch() final;
    void stop() final;

private:
    char buffer[30000];
    int new_socket;
    std::string HTMLResponse;
    void acceptor() final;
    void handler() final;
    void responder() final;
};

}



#endif //WSLWEBSERVER_SERVER_H
