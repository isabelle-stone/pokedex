#include <string>

class Pokemon {
public:
    Pokemon(int num, std::string name, std::string types[2], int total, int hp, int attack, int defense, int sp_atk, int sp_def, int speed, int generation, bool is_legendary);
    int num;
    std::string name;
    std::string types[2]; // initializing with 2 (2 types per pokemon)
    int total;
    int hp;
    int attack;
    int defense;
    int sp_atk;
    int sp_def;
    int speed;
    int generation;
    bool is_legendary; 
    void print();
};