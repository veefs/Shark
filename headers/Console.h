#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include <Windows.h>
#include "Triggerbot.h"
#include <stdlib.h>
#include <fstream>

using namespace std;


int RenderOptions() {

    string input;
    
    

    cout << CYAN << R"(
                                 ,-                                             | Welcome to Shark, Shark is a Valorant cheat
                               ,'::|                                            | -------------------------------------------
                              /::::|                                            | trigger-bot-enable - enables triggerbot
                            ,'::::o\                                      _..   | settings - lists settings
         ____........-------,..::?88b                                  ,-' /    
 _.--"""". . . .      .   .  .  .  ""`-._                           ,-' .;'     
<. - :::::o......  ...   . . .. . .  .  .""--._                  ,-'. .;'       
 `-._  ` `":`:`:`::||||:::::::::::::::::.:. .  ""--._ ,'|     ,-'.  .;'         
     """_=--       //'doo.. ````:`:`::::::::::.:.:.:. .`-`._-'.   .;'           
         ""--.__     P(       \               ` ``:`:``:::: .   .;'             
                "\""--.:-.     `.                             .:/               
                  \. /    `-._   `.""-----.,-..::(--"".\""`.  `:\               
                   `P         `-._ \          `-:\          `. `:\              
                                   ""            "            `-._)             
    )" << RESET << std::endl;

    std::cout << BLUE << ">" << RESET;
    cin >> input;


    if(input == "trigger-bot-enable") {
        system("CLS");
        std::cout << GREEN << "[TRIGGER-BOT-ENABLED]" << RESET << endl;
        TriggerBot("true", "255,255,255");
    }

    else if(input == "settings") {

        system("CLS");
        std::cout << "settings" << endl;
        std::cout << "--------------------------------------" << endl;
        std::ifstream f("settings/rgb.txt");

        if (f.is_open()) {
            std::cout << "rgb:";
            std::cout << f.rdbuf();  
        }

        Sleep(2000);
        system("CLS");
        RenderOptions();

    }

    return 0;
}

