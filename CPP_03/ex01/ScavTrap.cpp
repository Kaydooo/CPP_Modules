
#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void)
	{
		std::cout << GREEN << "ScavTrap Default Constrcuter Called" << RESET << std::endl;
		name = "Default";
		hitpoints = 100;
		energypoints = 50;
		attackdamage = 20;
	}

	ScavTrap::ScavTrap(std::string str){

		std::cout << GREEN << "ScavTrap Default Constrcuter Called" << RESET << std::endl;
		name = str;
		hitpoints = 100;
		energypoints = 50;
		attackdamage = 20;
	}

	ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src){
	std::cout << GREEN << "ScavTrap Copy Constrcuter Called" << RESET << std::endl;
	}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << RED << "ScavTrap Destrcuter Called" << RESET << std::endl;
	}

	ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
	{
		name = rhs.name;
		hitpoints = rhs.hitpoints;
		energypoints = rhs.energypoints;
		attackdamage = rhs.attackdamage;
		std::cout << GREEN << "ScavTrap Copy Assignment Constrcuter Called" << RESET << std::endl;
		return (*this);
	}

	void ScavTrap::attack(const std::string& target)
	{
		if(energypoints > 0 && hitpoints > 0)
		{
			std::cout << "ScavTrap: " << name << " Attacked " << target << " with " << this->attackdamage << " Damage" << std::endl;
			energypoints--;
		}
		else
			std::cout << "ScavTrap: " << name << ", there is no Enegry/Hit points" << std::endl;
		 std::cout << "Energy points : " << energypoints << std::endl << "Hit Points :    " << hitpoints << std::endl; 
	}

	void	ScavTrap::guardGate()
	{
		std::cout << name << "is in Guard mode !" << std::endl;
	}
