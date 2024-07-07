#include "Zombie.hpp"
#include <iostream>
void Zombie::setName(const std::string zombieName)
{
    name = zombieName;
}
void Zombie::announce(void)
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

// Zombie::~Zombie()
// {
//     std::cout <<"The Zombie " << name << " is destroyed" << std::endl;
// }

