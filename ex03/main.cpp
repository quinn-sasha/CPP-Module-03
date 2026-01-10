#include <iostream>
#include "DiamondTrap.hpp"

int main() {
  DiamondTrap doraemon("Doraemon");
  doraemon.whoAmI();

  std::cout << "HP: " << doraemon.getHitPoints() << std::endl;
  std::cout << "EP: " << doraemon.getEnergyPoints() << std::endl;
  doraemon.attack("Rat");
}
