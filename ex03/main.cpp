#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Zohir");
	DiamondTrap diamond2 = diamond;

	diamond.attack("enemy");
	diamond.beRepaired(30);
	diamond.whoAmI();
    diamond.highFivesGuys();
	diamond2.takeDamage(20);



	return (0);
}