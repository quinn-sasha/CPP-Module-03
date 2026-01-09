#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap("unknown", 100, 100, 30) {
  std::cout << "FragTrap " << name << " constructed" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30) {
  std::cout << "FragTrap " << name << " constructed" << std::endl;
}

// DiamondTrap type other is implicitly casted into ClapTrap type
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {}

// DiamondTrap type other is implicitly casted into ClapTrap type
FragTrap& FragTrap::operator=(const FragTrap& other) {
  if (this == &other) {
    return *this;
  }
  ClapTrap::operator=(other);
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name << " destructed" << std::endl;
}

void FragTrap::highFivesGuys() {
  std::cout << "I am " << name << ". You are awsome! High Five!!" << std::endl;
}
