/*
    The Main file
*/
#include <iostream>
#include <iomanip>
#include "Pirates vs Ninjas.h"
using namespace std;

char again = 'Y';

int main()
{
    while (again == 'y' || again == 'Y')
    {
        cout << "This is what happens when no specifications for a Character are made:\n";
        Character character1;
        character1.Talk();
        Character character2 = Character("Tim", 65);
        cout << "\n";
        cout << "This is what happens when proper specifications for a Character are made:\n";
        character2.Talk();

        Ninja ninja1 = Ninja("Hattori", 54, "I am the strongest ninja.\n");
        ninja1.Talk();

        Pirate pirate1 = Pirate("Jack", 76, "I am the strongest pirate.\n");
        pirate1.Talk();

        ninja1.Help();
        pirate1.Help();

        ninja1.Talk(false);
        ninja1.Talk(true);

        pirate1.Talk(false);
        pirate1.Talk(true);
        cout << "\n";

        system("pause");
        cout << "\nWould you like to repeat the process? (Y for yes, N for no)\n";
        cin >> again;
    }
    return 0;
}