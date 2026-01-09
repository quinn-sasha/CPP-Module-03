#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hit_points(10), energy_points(10), attack_damage(0) {
  std::cout << "CrapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, int hit_points, int energy_points,
                   int attack_damage)
    : name(name), hit_points(hit_points), energy_points(energy_points),
      attack_damage(attack_damage) {

  std::cout << "CrapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap()
    : name("unknown"), hit_points(10), energy_points(10), attack_damage(0) {
  std::cout << "CrapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hit_points(other.hit_points),
      energy_points(other.energy_points), attack_damage(other.attack_damage) {}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if (this == &other) {
    return *this;
  }
  name = other.name;
  hit_points = other.hit_points;
  energy_points = other.energy_points;
  attack_damage = other.attack_damage;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "CrapTrap " << name << " destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (hit_points == 0 || energy_points == 0) {
    return;
  }
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
            << attack_damage << " points of damage!" << std::endl;
  --energy_points;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hit_points == 0) {
    return;
  }
  std::cout << "CrapTrap " << name << " takes " << amount
            << " damage of points!" << std::endl;
  if (static_cast<unsigned int>(hit_points) < amount) {
    hit_points = 0;
    return;
  }
  hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hit_points == 0 || energy_points == 0) {
    return;
  }
  std::cout << "CrapTrap " << name << " restores " << amount << " points of HP!"
            << std::endl;
  hit_points += amount;
  --energy_points;
}

int ClapTrap::getHitPoints() const { return hit_points; }

int ClapTrap::getEnergyPoints() const { return energy_points; }
