#include "FragTrap.hpp"

int main()
{
    std::string t = "test";
    ClapTrap first("hated");
    FragTrap secnd(t);
    first.attack(t);
    first.attack("someone");
    first.takeDamage(5);
    first.beRepaired(3);
    for (int i = 0; i < 6; i++)
    {
        secnd.attack("someone");
        secnd.takeDamage(2);
        secnd.beRepaired(3);
    }
    secnd.highFivesGuys();
    return (0);
}