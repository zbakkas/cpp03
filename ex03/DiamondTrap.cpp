#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap("_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    Name = "";
    EnergyPoints = 50;
    
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    Name = name;
    EnergyPoints = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    Name = diamondtrap.Name;
    HitPoints = diamondtrap.HitPoints;
    EnergyPoints = diamondtrap.EnergyPoints;
    AttacDdamage =  diamondtrap.AttacDdamage;
    
}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap& diamondtrap)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    Name = diamondtrap.Name;
    HitPoints = diamondtrap.HitPoints;
    EnergyPoints = diamondtrap.EnergyPoints;
    AttacDdamage = diamondtrap.AttacDdamage;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << Name << " and ClapTrap name is " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
   ScavTrap::attack(target);
}





