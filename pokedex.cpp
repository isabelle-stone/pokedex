#include "pokedex.h"

Pokedex::Pokedex() {}

void Pokedex::addPoke(Pokemon& p) {
    dex.push_back(p);
}

Pokemon Pokedex::getPoke(int id) {
    for(int i = 0; i < dex.size(); i++) {
        if (dex[i].num == id) {
            return dex[i];
        }
    }
    return dex[0];  // if no match found
}

Pokemon Pokedex::searchPoke(std::string name) {
    for(int i = 0; i < dex.size(); i++) {
        if ((dex[i].name) == name) {
            return dex[i];
            }
        }
    return dex[0];  // if no match found
    }

