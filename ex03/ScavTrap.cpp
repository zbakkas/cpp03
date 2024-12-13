
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
    Name = "";
    HitPoints = 100;
    EnergyPoints = 50;
    AttacDdamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    Name = name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttacDdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    Name = scavtrap.Name;
    HitPoints = scavtrap.HitPoints;
    EnergyPoints = scavtrap.EnergyPoints;
    AttacDdamage = scavtrap.AttacDdamage;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& scavtrap)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    Name = scavtrap.Name;
    HitPoints = scavtrap.HitPoints;
    EnergyPoints = scavtrap.EnergyPoints;
    AttacDdamage = scavtrap.AttacDdamage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if(EnergyPoints <= 0 && HitPoints <= 0)
    {
        std::cout << "ScavTrap " << Name << " no Energy and HitPoints" << std::endl;
        return;
    }

    std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << AttacDdamage << " points of damage!" << std::endl;
    // ScavTrap <name> attacks <target>, causing <damage> points of damage!
}


