#ifndef CLAVTRAP_HPP
# define CLAVTRAP_HPP

# include "ClapTrap.hpp" 

class ClavTrap : public ClapTrap
{
private:
    bool guardGate;
public:
    ClavTrap();
    ClavTrap(std::string name);
    ~ClavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif