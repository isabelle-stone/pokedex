#include <iostream>
#include <fstream>
#include <sstream>
#include "pokedex.h"

int main() {
    std::string line;
    std::string name;
    std::string types[2];
    std::string numStr;
    std::string totalStr;    //  first reading them all as strings...
    std::string hpStr;       //  will convert all to int & bool once data is read in...
    std::string attackStr;
    std::string defenseStr;
    std::string sp_atkStr;
    std::string sp_defStr;
    std::string speedStr;
    std::string generationStr;
    std::string is_legendaryStr; 

    Pokedex my_pokedex;

    std::ifstream input_file("pokemon_data.csv");
    std::getline(input_file, line);    // skipping first line of data 
    while(std::getline(input_file, line)) {
        std::stringstream ss(line);  // making line stream so we can use getline()
        std::getline(ss, numStr, ','); 
        int num = std::stoi(numStr);

        std::getline(ss, name, ',');

        std::getline(ss, types[0], ',');  // type 1
        std::getline(ss, types[1], ',');  // type 2
        
        std::getline(ss, totalStr, ',');
        int total = std::stoi(totalStr);  // converting to int
        
        std::getline(ss, hpStr, ',');
        int hp = std::stoi(hpStr);

        std::getline(ss, attackStr, ',');
        int attack = std::stoi(attackStr);

        std::getline(ss, defenseStr, ',');
        int defense = std::stoi(defenseStr);

        std::getline(ss, sp_atkStr, ',');
        int sp_atk = std::stoi(sp_atkStr);

        std::getline(ss, sp_defStr, ',');
        int sp_def = std::stoi(sp_defStr);

        std::getline(ss, speedStr, ',');
        int speed = std::stoi(speedStr);

        std::getline(ss, generationStr, ',');
        int generation = std::stoi(generationStr);

        std::getline(ss, is_legendaryStr, ',');
        bool is_legendary = false;
        if (is_legendaryStr == "true" || is_legendaryStr == "True") {
            is_legendary = true;
        }
        
        Pokemon p = Pokemon(num, name, types, total, hp, attack, defense, sp_atk, sp_def, speed, generation, is_legendary); 

        my_pokedex.addPoke(p);

    } 

    std::string user_input;
    bool is_found = false;
    while(!is_found) {
        std::cout << "Enter a Pokemon name to search the Pokedex: ";
        std::cin >> user_input;
        Pokemon p = my_pokedex.searchPoke(user_input);
        if(p.name == user_input) {
            // if found output...
            std::cout << "Pokemon found!" << std::endl;
            p.print();
            is_found = true;
        }
        else {
            // if not found...
            std::cout << "Pokemon is not in the Pokedex :( Try again! (fyi case sensitive)" << std::endl;     
        }
    }
    return 0;
}