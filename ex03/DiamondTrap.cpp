#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap():  ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    ClapTrap::Name="_clap_name";
    DiamondTrap::Name = "";
    EnergyPoints = 50;
    
}

DiamondTrap::DiamondTrap(std::string name):  ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    ClapTrap::Name=name+"_clap_name";
    DiamondTrap::Name  = name;
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





