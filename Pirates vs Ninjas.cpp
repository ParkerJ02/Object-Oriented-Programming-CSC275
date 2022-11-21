/*
    All methods
*/
#include <iostream>
#include <iomanip>
#include "Pirates vs Ninjas.h"
using namespace std;

// This is the empty Help method for the GameStructure class.
void GameStructure::Help() {
}

// This is the constructor for the Character class.
Character::Character() {
}
// This is the destructor for the Character class.
Character::~Character() {
    cout << "\nCharacter destructor called.\n";
}
// This is the constructor for the Character class with parameters.
Character::Character(string N, int H) {
    name = N;
    health = H;
}
// This is the getName function for the Character class.
string Character::getName() {
    return name;
}
// This is the setName function for the Character class.
void Character::setName(string N) {
    name = N;
}
// This is the getHealth function for the Character class.
int Character::getHealth() {
    return health;
}
// This is the setHealth function for the Character class.
void Character::setHealth(int H) {
    health = H;
}
// This is the defualt Talk function for the Character class.
void Character::Talk() {
    cout << "Hello, my name is " << name << " and I have " << health << " health.\n";
}
// This is the empty Help method for the Character class.
void Character::Help() {
}

// This is the constructor for the Ninja class.
Ninja::Ninja() {}
// This is the constructor for the Ninja class with parameters.
Ninja::Ninja(string N, int H, string NT) {
    name = N;
    health = H;
    ninjaTalk = NT;
}
// This is the getNinjaTalk function for the Ninja class.
string Ninja::getNinjaTalk() {
    return ninjaTalk;
}
// This is the setNinjaTalk function for the Ninja class.
void Ninja::setNinjaTalk(string NT) {
    ninjaTalk = NT;
}
// This is the defualt Talk function for the Ninja class.
void Ninja::Talk() {
    cout << "\nHello, my name is " << name << " and I have " << health << " health.\n";
    cout << ninjaTalk;
}
// This is the Talk function for the Ninja class when the Ninja takes damage.
void Ninja::Talk(bool damage) {
    if (damage) {
        cout << name << " was slashed by a sword and his health is now at " << health-10 << ".\n";
    }
    else {
        cout << "\n" << name << " is perfectly healthy.\n";
    }
}
// This is the Help function for the Ninja class.
void Ninja::Help() {
    cout << "\nNinjas can damage the pirates with throwing stars."
        << " Each star that lands takes away 10 health points.\n";
}

// This is the constructor for the Pirate class.
Pirate::Pirate() {}
// This is the constructor for the Pirate class with parameters.
Pirate::Pirate(string N, int H, string PT) {
    name = N;
    health = H;
    pirateTalk = PT;
}
// This is the getPirateTalk function for the pirate class.
string Pirate::getPirateTalk() {
    return pirateTalk;
}
// This is the getPirateTalk function for the pirate class.
void Pirate::setPirateTalk(string PT) {
    pirateTalk = PT;
}
// This is the defualt Talk function for the pirate class.
void Pirate::Talk() {
    cout << "\nHello, my name is " << name << " and I have " << health << " health.\n";
    cout << pirateTalk;
}
// This is Talk function for the pirate class when the pirate takes damage.
void Pirate::Talk(bool damage) {
    if (damage) {
        cout << name << " was hit with a throwing star and his health is now at " << health-10 << ".\n";
    }
    else {
        cout << "\n" << name << " is perfectly healthy.\n";
    }
}
// This is the Help function for the Ninja class.
void Pirate::Help() {
    cout << "\nPirates can damage the ninjas with swords."
        << " Each slash that lands takes away 10 health points.\n";
}