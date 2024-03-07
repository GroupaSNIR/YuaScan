#include <iostream>
#include <tuple>
#include "includes/utils.hpp"
#include "includes/req.hpp"
#include "includes/launch.hpp"

int main() {

    // Initialize settings kek :^]
    //Utils::setIsDebugActivate(false);
    //Req::setIsThreadingActivate(false);
    //Req::setIsProxyActivate(false);

    Launch::getStarted();
    Launch::displayMainMenu();
    std::tuple<int, std::string> optionValue = Launch::chooseOption();
    if (std::get<0>(optionValue) == 0) {
        Utils::clearTerminal();
        Launch::getLogo();
        std::cout << "\n\t> Option : " << std::get<1>(optionValue) << std::endl;
    } else {
        Utils::clearTerminal();
        Launch::getLogo();
        std::cout << "\n\t" << std::endl;
        Utils::error("This option doesn't exist !");
        exit(0);
    }
    
    return 0;

}
