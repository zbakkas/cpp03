#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamond");
	DiamondTrap diamond2 = diamond;

	diamond.attack("enemy");
	diamond.beRepaired(30);
	diamond.whoAmI();
    diamond.highFivesGuys();

	return (0);
}