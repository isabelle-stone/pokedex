#include "pokemon.h"
#include <iostream>

Pokemon::Pokemon(int num, std::string name, std::string types[2], int total, int hp, int attack, int defense, int sp_atk, int sp_def, int speed, int generation, bool is_legendary) {
    // constructor 
    this->num = num;
    this->name = name;
    this->types[0] = types[0]; // type 1
    this->types[1] = types[1]; // type 2
    this->total = total;
    this->hp = hp;
    this->attack = attack;
    this->defense = defense;
    this->sp_atk = sp_atk;
    this->sp_def = sp_def;
    this->speed = speed;
    this->generation = generation;
    this->is_legendary = is_legendary;
}

void Pokemon::print() {
    std::cout << "ID: " << this->num << std::endl;
    std::cout << "Pokemon name: " << this->name << std::endl;
    std::cout << "Pokemon types: " << this->types[0] << ", " << this->types[1] << std::endl;
    std::cout << "Total: " << this->total << std::endl;
    std::cout << "HP: " << this->hp << std::endl;
    std::cout << "Attack: " << this->attack << std::endl;
    std::cout << "Defense: " << this->defense << std::endl;
    std::cout << "Special Attack: " << this->sp_atk << std::endl;
    std::cout << "Special Defense: " << this->sp_def << std::endl;
    std::cout << "Speeed: " << this->speed << std::endl;
    std::cout << "Generation: " << this->generation << std::endl;
    std::cout << "Legendary: " << this->is_legendary << std::endl;

}