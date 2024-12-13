#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamond");

	diamond.attack("enemy");
	diamond.beRepaired(30);
	diamond.whoAmI();
    diamond.highFivesGuys();

	return (0);
}