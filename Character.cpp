#include "Character.hpp"

Character::Character()
{
    name = "";
    life = mana = 100;
}

Character::Character(string newName, int newLife, int newMana, string weaponName, int weaponDammages)
{
    name = newName;
    life = newLife;
    mana = newMana;
    Weapon newWeapon(weaponName, weaponDammages);
    equipedWeapon = newWeapon;
}

void Character::receiveDammages(int dammages)
{
    life -= dammages;
    if (life < 0)
    {
        life = 0;
    }
}

void Character::attack(Character &target)
{
    target.receiveDammages(equipedWeapon.getDammages());
}

void Character::takeLifePotion(int lifePoints)
{
    life += lifePoints;
    if (life > 100)
    {
        life = 100;
    }
}

void Character::switchWeapon(Weapon &newWeapon)
{
    equipedWeapon.change(newWeapon.getName(), newWeapon.getDammages());
}

bool Character::isAlive()
{
    // if (life == 0){
    //     return false;
    // }
    // return true;
    return (life == 0 ? false : true);
}

void Character::display()
{
    cout << "name: " << name << " life: " << life << " mana: " << mana << endl;
    cout << "je possede: ";
    equipedWeapon.display();
}

Character::~Character()
{
}