#ifndef UTILS_HEADER
#define UTILS_HEADER

#include <iostream>
#include <conio.h>


#define GREEN  "\x1b[32m"
#define BLUE   "\x1b[34m"
#define YELLOW "\x1b[33m"
#define RED    "\x1b[31m"
#define RESET  "\x1b[37m"

class Utils{

    private:
        static bool isDebugActivate;

    public:

        static void warning(const std::string& msg){
            std::cout << "[WARNING" /*<< RESET*/ << "] - " << msg << std::endl;
        }

        static void error(const std::string& msg){
            std::cout << "[" << /*RED <<*/ "ERROR" /*<< RESET*/ << "] - " << msg << std::endl;
        }

        static void info(const std::string& msg){
            std::cout << "[" << /*BLUE <<*/ "INFO" /*<< RESET*/ << "] - " << msg << std::endl;
        }

        static void debug(const std::string& msg){
            std::cout << "[DEBUG] - " << msg << std::endl;
        }

        static bool getIsDebugActivate(){
            return isDebugActivate;
        }

        static void setIsDebugActivate(bool value){
            isDebugActivate = value;

        }

        static void clearTerminal(){
            int i;

            for (i = 0; i < 50; i++){
                printf ("\n\n\n\n\n");
            }
        }

};
#endif