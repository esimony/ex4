//
// Created by reut on 1/12/20.
//

#ifndef EX4_SERVER_SIDE_H
#define EX4_SERVER_SIDE_H

#include "ClientHandler.h"

namespace server_side{
    class Server;
}

class server_side:: Server {
public:
    virtual void open(int port, ClientHandler* c);
    virtual void stop();
};





















#endif //EX4_SERVER_SIDE_H
