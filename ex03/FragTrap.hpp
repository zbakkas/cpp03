#ifndef   FRAGTRAP_HPP
# define  FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap: virtual public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap::FragTrap(std::string name);
    FragTrap(const FragTrap& fragtrap);
    FragTrap& operator =(const FragTrap& fragtrap);
    ~FragTrap();
    void highFivesGuys();
    void attack(const std::string& target);

};



#endif