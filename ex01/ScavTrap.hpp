#ifndef EX01_SCAVTRAP_HPP_
#define EX01_SCAVTRAP_HPP_

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  explicit ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap& other);
  ScavTrap& operator=(const ScavTrap& other);
  ~ScavTrap();

  void attack(const std::string& target);  // override
  void guardGate();
};

#endif  // EX01_SCAVTRAP_HPP_
