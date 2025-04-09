#include <iostream>

void drinkPotion(int& hp, int healing) {
    hp += healing;
}

void damageHero(int* hp, int damage) {
    *hp -= damage;
}

int main() {
    int superheroHP = 10;

    std::cout << "Superhero's starting HP: " << superheroHP << std::endl;

    std::cout << "Superhero drinks a healing potion (+5 HP)." << std::endl;
    drinkPotion(superheroHP, 5);
    std::cout << "Superhero's current HP: " << superheroHP << std::endl;

    std::cout << "Superhero takes damage from a goblin (-3 HP)." << std::endl;
    damageHero(&superheroHP, 3);
    std::cout << "SuperHeros current HP: " << superheroHP << std::endl;

    return 0;
}
