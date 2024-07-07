#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include "Zombie.hpp"

void announce(void);
Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
#endif