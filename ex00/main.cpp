#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("player");
    clap.attack("player2");
    clap.takeDamage(2);
    clap.attack("player2");
    clap.beRepaired(20);
    clap.attack("player2");
    clap.attack("player2");
    clap.attack("player2");
    clap.attack("player2");
    clap.attack("player2");
    clap.attack("player2");
    clap.attack("player2");
}