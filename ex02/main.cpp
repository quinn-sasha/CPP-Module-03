#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
  ScavTrap evangelion("evangelion");
  FragTrap angel("angel");

  for (int i = 0; i < 4; i++) {
    angel.attack("evangelion");
    evangelion.takeDamage(30);
  }
  std::cout << "Angel EP: " << angel.getEnergyPoints() << std::endl;
  angel.highFivesGuys();
}
