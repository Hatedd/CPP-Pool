#include "ClapTrap.hpp"

int main()
{
    std::string t = "test";
    ClapTrap first("hated");
    ClapTrap secnd(t);
    first.attack(t);
    first.attack("someone");
    first.takeDamage(5);
    first.beRepaired(3);
    for (int i = 0; i < 6; i++)
    {
        secnd.attack("someone");
        secnd.takeDamage(3);
        secnd.beRepaired(2);
    }
    return (0);
}