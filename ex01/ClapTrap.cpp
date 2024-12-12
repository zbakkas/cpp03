#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
    Name = "";
    HitPoints = 10;
    EnergyPoints = 10;
    AttacDdamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttacDdamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    Name = claptrap.Name;
    HitPoints = claptrap.HitPoints;
    EnergyPoints = claptrap.EnergyPoints;
    AttacDdamage = claptrap.AttacDdamage;
}

ClapTrap& ClapTrap::operator =(const ClapTrap& claptrap)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    Name = claptrap.Name;
    HitPoints = claptrap.HitPoints;
    EnergyPoints = claptrap.EnergyPoints;
    AttacDdamage = claptrap.AttacDdamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(EnergyPoints <= 0 && HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " no Energy and HitPoints" << std::endl;
        return;
    }


    std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << AttacDdamage << " points of damage!" << std::endl;
    // ClapTrap <name> attacks <target>, causing <damage> points of damage!
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(EnergyPoints <= 0 && HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " no Energy and HitPoints" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " take " << amount << " points of damage!" << std::endl;
    HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints <= 0 && HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " no Energy and HitPoints" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " be repaired " << amount << " points!" << std::endl;
    HitPoints += amount;
}

