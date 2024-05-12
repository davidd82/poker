/*
deck.cpp
*/

#include "deck.h"
#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Sets size data member to user input
Deck::Deck() {
    for (int i = 0; i < 52; i++) {
        cards.insert(i);
    }
}

//Destructor. releases resources
Deck::~Deck() {

}