#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
// #include "ClapTrap.cpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& diamondtrap);
        DiamondTrap& operator =(const DiamondTrap& diamondtrap);
        ~DiamondTrap();
        void whoAmI();
        void attack(const std::string& target);
};




#endif