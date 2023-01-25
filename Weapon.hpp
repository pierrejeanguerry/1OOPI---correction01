#pragma once
#include <iostream>

using namespace std;

class Weapon
{
private:
    string name;
    int dammages;

public:
    Weapon();
    Weapon(string newName, int newDammages);
    void change(string newName, int newDammages);
    void display();
    int getDammages() const;
    string getName() const;
};