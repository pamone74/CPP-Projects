#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
int main(int ac, char *argv[])
{
    if(ac > 1)
    {
        for(int i(1); i < ac ; i++)
        {
            std::string holder(argv[i]);
            for (std::size_t j(0); j < holder.length(); j++) 
            {
                char c = std::toupper(holder[j]);
                std::cout << c;
            }
            std::cout << " ";

        }
        std::cout << std::endl;
    }
    else {
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}