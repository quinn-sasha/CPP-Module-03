#ifndef EX03_DIAMONDTRAP_HPP_
#define EX03_DIAMONDTRAP_HPP_

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
  std::string name;  // name hiding!

 public:
  DiamondTrap();
  explicit DiamondTrap(const std::string& name);
  DiamondTrap(const DiamondTrap& other);
  DiamondTrap& operator=(const DiamondTrap& other);
  ~DiamondTrap();

  using ScavTrap::attack;
  void whoAmI();
};

#endif  // EX03_DIAMONDTRAP_HPP_
