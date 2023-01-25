#include <iostream>
#include "Character.cpp"
#include "Weapon.cpp"

using namespace std;

int main()
{
    Character geralt("geralt", 100, 100, "Excalibur", 300);
    Character yennefer = Character("yennefer", 100, 100, "dague", 45);
    Weapon scythe("scythe", 60);
    Weapon theSword("theSword", 50);
    geralt.display();
    yennefer.display();
    yennefer.switchWeapon(scythe);
    yennefer.attack(geralt);
    geralt.display();
    geralt.takeLifePotion(10);
    geralt.display();
    geralt.attack(yennefer);
    yennefer.display();
    cout << geralt.isAlive() << endl;
    geralt.receiveDammages(200);
    geralt.display();
    cout << geralt.isAlive() << endl;

    return 0;
}