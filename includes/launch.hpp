#ifndef LAUNCH_HEADER
#define LAUNCH_HEADER

#include <iostream>
#include <windows.h>
#include <Lmcons.h>
#include <tuple>
#include "Options.h"

class Launch{

    public:

        static void getStarted(){

            char username[UNLEN + 1];
            DWORD username_len = UNLEN + 1;
            GetUserName(username, &username_len);

            std::cout << "/$$     /$$                    /$$$$$$" << std::endl;
            std::cout << "| $$   /$$/                   /$$__  $$" << std::endl;
            std::cout << "\\  $$ /$$//$$   /$$  /$$$$$$ | $$  \\__/  /$$$$$$$  /$$$$$$  /$$$$$$$\\" << std::endl;
            std::cout << " \\  $$$$/| $$  | $$ |____  $$|  $$$$$$  /$$_____/ |____  $$| $$__  $$" << std::endl;
            std::cout << "  \\  $$/ | $$  | $$  /$$$$$$$ \\____  $$| $$        /$$$$$$$| $$  \\ $$" << std::endl;
            std::cout << "   | $$  | $$  | $$ /$$__  $$ /$$  \\ $$| $$       /$$__  $$| $$  | $$" << std::endl;
            std::cout << "   | $$  |  $$$$$$/|  $$$$$$$|  $$$$$$/|  $$$$$$$|  $$$$$$$| $$  | $$" << std::endl;
            std::cout << "   |__/   \\______/  \\_______/ \\______/  \\_______/ \\_______/|__/  |__/" << std::endl;

            std::cout << "\n\tWelcome to YuaScanner " << username << " !\n" << std::endl;

        }

        static void getLogo(){

            std::cout << "/$$     /$$                    /$$$$$$" << std::endl;
            std::cout << "| $$   /$$/                   /$$__  $$" << std::endl;
            std::cout << "\\  $$ /$$//$$   /$$  /$$$$$$ | $$  \\__/  /$$$$$$$  /$$$$$$  /$$$$$$$\\" << std::endl;
            std::cout << " \\  $$$$/| $$  | $$ |____  $$|  $$$$$$  /$$_____/ |____  $$| $$__  $$" << std::endl;
            std::cout << "  \\  $$/ | $$  | $$  /$$$$$$$ \\____  $$| $$        /$$$$$$$| $$  \\ $$" << std::endl;
            std::cout << "   | $$  | $$  | $$ /$$__  $$ /$$  \\ $$| $$       /$$__  $$| $$  | $$" << std::endl;
            std::cout << "   | $$  |  $$$$$$/|  $$$$$$$|  $$$$$$/|  $$$$$$$|  $$$$$$$| $$  | $$" << std::endl;
            std::cout << "   |__/   \\______/  \\_______/ \\______/  \\_______/ \\_______/|__/  |__/" << std::endl;

        }

        static void displayMainMenu(){
            std::cout << "\t> 1 - Directory Brute Forcing" << std::endl;
            std::cout << "\t> 2 - Request Sender" << std::endl;
            std::cout << "\t> e - Exit" << std::endl;
            std::cout << "\t> c - Credits" << std::endl;
            std::cout << "\t> e - Exit" << std::endl;
        }

        static std::tuple<int, std::string> chooseOption(){
            std::string option;
            int status;

            std::cout << "\n\tChoose an option > ";

            try {
                std::cin >> option;
                std::tuple<int, std::string> optionValue = Options::checkingOption(option);
                status = std::get<0>(optionValue);
                option = std::get<1>(optionValue);
            } catch(const std::exception& e){
                Utils::error("Impossible to read the value !");
                status = 1;
                option = "null";
                throw e;
            }

            return {status, option};
        }


};
#endif