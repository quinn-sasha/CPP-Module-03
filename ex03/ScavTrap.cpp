#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("unknown", 100, 50, 20) {
  std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20) {
  std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

// ScavTrap type other is implicitly casted into ClapTrap type
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {

  std::cout << "ScavTrap copy constructed" << std::endl;
}

// ScavTrap type other is implicitly casted into ClapTrap type
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  if (this == &other) {
    return *this;
  }
  ClapTrap::operator=(other);
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name << " destructed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (hit_points == 0 || energy_points == 0) {
    return;
  }
  std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
            << attack_damage << " points of damage!" << std::endl;
  --energy_points;
}

void ScavTrap::guardGate() {
  if (hit_points == 0 || energy_points == 0) {
    return;
  }
  std::cout << "ScavTrap " << name << " becomes Gate Keeper mode!" << std::endl;
}
