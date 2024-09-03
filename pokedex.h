#include "pokemon.h"
#include <vector>

class Pokedex {
public:
    // object to store all of our Pokemon

    Pokedex(); 
    std::vector<Pokemon> dex;

    void addPoke(Pokemon& newP);  // add new pokemon to pokedex

    Pokemon getPoke(int id);
    Pokemon searchPoke(std::string name);
};
