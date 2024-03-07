//
// Created by lucas on 07/03/2024.
//

#ifndef YUASCAN_OPTIONS_H
#define YUASCAN_OPTIONS_H

#include <iostream>
#include "utils.hpp"


class Options {

    public:

        static std::tuple<int, std::string> checkingOption(const std::string& option){

            int optionStatus = 1;

            if(option == "1"){
                std::cout << "* Execute Directory Bruteforce *" << std::endl;
                optionStatus = 0;
            } else if (option == "2"){
                std::cout << "* Execute Request Sender *" << std::endl;
                optionStatus = 0;
            } else if (option == "c"){
                std::cout << "* Showing Credits *" << std::endl;
                optionStatus = 0;
            } else if (option == "e"){
                optionStatus = 0;
                exit(0);
            } else {
                optionStatus = 1;
            }

            return {optionStatus, option};

        }

};


#endif //YUASCAN_OPTIONS_H
