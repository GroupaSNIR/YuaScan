#ifndef HEADER_REQ
#define HEADER_REQ

#include <iostream>
#include "utils.hpp"

class Req{

    private:
        static bool isThreadingActivate;
        static bool isProxyActivate;

    public:

        static void sendRequest(const std::string& url){

        }

    bool getIsThreadingActivate(){
        return isThreadingActivate;
    }

    static void setIsThreadingActivate(bool value){
        isThreadingActivate = value;

    }

    bool getIsProxyActivate(){
        return isProxyActivate;
    }

    static void setIsProxyActivate(bool value){
        isProxyActivate = value;

    }

};

#endif