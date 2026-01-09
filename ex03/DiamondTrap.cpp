#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
  this->name = name;
  this->hit_points = 100;   // FragTrap
  this->energy_points = 50; // ScavTrap
  this->attack_damage = 30; // FragTrap

  std::cout << "DiamondTrap " << this->name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap()
    : ClapTrap("unknown_clap_name"), ScavTrap(), FragTrap() {
  this->name = "unknown";
  this->hit_points = 100;   // FragTrap
  this->energy_points = 50; // ScavTrap
  this->attack_damage = 30; // FragTrap

  std::cout << "DiamondTrap " << this->name << " constructed" << std::endl;
}

// DiamondTrap type other is implicitly casted into ClapTrap type
DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other) {
  *this = other;
}

// DiamondTrap type other is implicitly casted into ClapTrap type
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  if (this == &other) {
    return *this;
  }
  ClapTrap::operator=(other);
  this->name = other.name;
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << this->name << " destructed" << std::endl;
}

void DiamondTrap::whoAmI() {
  std::cout << "ClapTrap::name: " << ClapTrap::name << std::endl;
  std::cout << "DiamondTrap::name: " << this->name << std::endl;
}
