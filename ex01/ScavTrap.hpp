#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& scavtrap);
        ScavTrap& operator =(const ScavTrap& scavtrap);
        ~ScavTrap();
        void guardGate();
        //Polymorphism in Inheritance
        void attack(const std::string& target);
};

#endif