
#include    "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
    Name = "";
    HitPoints = 100;
    EnergyPoints = 100;
    AttacDdamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttacDdamage = 30;
}

FragTrap::FragTrap(const FragTrap& fragtrap)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    Name = fragtrap.Name;
    HitPoints = fragtrap.HitPoints;
    EnergyPoints = fragtrap.EnergyPoints;
    AttacDdamage = fragtrap.AttacDdamage;
}

FragTrap& FragTrap::operator =(const FragTrap& fragtrap)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    Name = fragtrap.Name;
    HitPoints = fragtrap.HitPoints;
    EnergyPoints = fragtrap.EnergyPoints;
    AttacDdamage = fragtrap.AttacDdamage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << Name << " high fives guys" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(EnergyPoints <= 0 && HitPoints <= 0)
    {
        std::cout << "FragTrap " << Name << " no Energy and HitPoints" << std::endl;
        return;
    }

    std::cout << "FragTrap " << Name << " attack " << target << ", causing " << AttacDdamage << " points of damage!" << std::endl;
}