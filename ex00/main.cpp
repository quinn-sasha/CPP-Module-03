#include <iostream>
#include "ClapTrap.hpp"

int main() {
  ClapTrap gundam("gundam");
  ClapTrap eva("eva");

  gundam.attack("eva");
  eva.takeDamage(0);

  std::cout << "eva HP: " << eva.getHitPoints() << std::endl;
  std::cout << "eva EP: " << eva.getEnergyPoints() << std::endl;
  std::cout << "gundam EP: " << gundam.getEnergyPoints() << std::endl;

  eva.attack("gundam");
  gundam.takeDamage(0);

  std::cout << "gundam HP: " << gundam.getHitPoints() << std::endl;
  std::cout << "gundam EP: " << gundam.getEnergyPoints() << std::endl;
  std::cout << "eva EP: " << eva.getEnergyPoints() << std::endl;

  for (int i = 0; i < 10; i++) {
    eva.attack("Nothing");
  }
  std::cout << "eva EP: " << eva.getEnergyPoints() << std::endl;

  gundam.beRepaired(42);
  std::cout << "gundam HP: " << gundam.getHitPoints() << std::endl;
  std::cout << "gundam EP: " << gundam.getEnergyPoints() << std::endl;
}
