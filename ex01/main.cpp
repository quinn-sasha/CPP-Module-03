#include "ScavTrap.hpp"
#include <iostream>

int main() {
  ScavTrap evangelion("evangelion");

  evangelion.attack("Buildings");
  evangelion.takeDamage(90);
  std::cout << "HP: " << evangelion.getHitPoints() << std::endl;
  std::cout << "EP: " << evangelion.getEnergyPoints() << std::endl;

  evangelion.guardGate();
}
