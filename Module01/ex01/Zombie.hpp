#include <iostream>
class Zombie
{
    std::string name;

    public:
        void announce(void);
        Zombie(const std::string &zombieName):name(zombieName){};
        void setName(const std::string name);
        Zombie();
        // ~Zombie();
};