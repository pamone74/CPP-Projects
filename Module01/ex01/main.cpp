#include "Zombie.h"
int  main(void)
{
    Zombie * zom = zombieHorde(2, "Amone");
    for(int i(0); i < 2; i++)
    {
        std::cout << "This is Zombie" << i << std::endl;
        zom[i].announce();
    }
    
    delete []zom;
}