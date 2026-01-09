#ifndef EX03_SCAVTRAP_HPP_
#define EX03_SCAVTRAP_HPP_

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap {

public:
  ScavTrap();
  ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap& other);
  ScavTrap& operator=(const ScavTrap& other);
  virtual ~ScavTrap();

  void attack(const std::string& target); // override
  void guardGate();
};

#endif // EX03_SCAVTRAP_HPP_
