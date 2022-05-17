#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class DiamondTrap : public ScavTrap, public FragTrap
{

	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string n);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap const &operator=(DiamondTrap const &rhs);
		~DiamondTrap();

		using ScavTrap::attack;
		void	whoAmI();
		void	print_status(void);
};

#endif