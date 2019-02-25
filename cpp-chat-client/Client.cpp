/**
 * Author: Sidney Fritz
 */

#include "Client.h"
#include "Application.h"
#include "vusocket.h"


void Client::tick() {

}

int Client::readFromStdin(){
    std::string command;
    std::cin>>command;
    if(command == "!quit"){
        return -1;
    }else{
        return 1;
    }
}

int Client::readFromSocket(){
    return 1;
}

void Client::closeSocket(){

}

void Client::createSocketAndLogIn() {
    sock_init();
    struct addrinfo {
        int ai_flags;
        int ai_family ;
        int ai_socktype ;
        int ai_protocol ;
        socklen_t ai_addrlen ;
        struct sockaddr *ai_addr;
        char * ai_canonname ;
        struct addrinfo *ai_next;
    };
    addrinfo{0, AF_UNSPEC, SOCK_STREAM, IPPROTO_TCP};

    int status = getaddrinfo("52.58.97.202", "5378",addrinfo->, addrinfo->ai_next);


}

