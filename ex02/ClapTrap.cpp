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
    if(EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " no Energy or HitPoints" << std::endl;
        return;
    }

    EnergyPoints--;
    std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << AttacDdamage << " points of damage!" << std::endl;
    // std::cout << HitPoints<<"\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " no Energy or HitPoints" << std::endl;
        return;
    }
    EnergyPoints--;
    HitPoints -= amount;
    std::cout << "ClapTrap " << Name << " take " << amount << " points of damage!"  << "your hit point is "<< HitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " no Energy or HitPoints" << std::endl;
        return;
    }
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "ClapTrap " << Name << " be repaired " << amount << " points!"  << " now is " <<HitPoints << std::endl;
}

