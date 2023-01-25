#include "Weapon.hpp"

Weapon::Weapon()
{
    name = "Épée de bois";
    dammages = 10;
}

Weapon::Weapon(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}

void Weapon::change(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}

void Weapon::display()
{
    cout << "name: " << name << " dammages: " << dammages << endl;
}

int Weapon::getDammages() const
{
    return dammages;
}

string Weapon::getName() const
{
    return name;
}