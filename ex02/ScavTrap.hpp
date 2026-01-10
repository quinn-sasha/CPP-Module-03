#ifndef EX02_SCAVTRAP_HPP_
#define EX02_SCAVTRAP_HPP_

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap& other);
  ScavTrap& operator=(const ScavTrap& other);
  ~ScavTrap();

  void attack(const std::string& target);  // override
  void guardGate();
};

#endif  // EX02_SCAVTRAP_HPP_
