#include "ScavTrap.hpp"
int main()
{
    ClapTrap clap("player");
    ScavTrap scav("robot");

    scav.attack("player");
    scav.takeDamage(10);
    scav.attack("player");
    clap.takeDamage(20);
}