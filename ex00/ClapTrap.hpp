#ifndef EX00_CRAPTRAP_HPP_
#define EX00_CRAPTRAP_HPP_

#include <string>

class ClapTrap {
  std::string name;
  int hit_points;
  int energy_points;
  int attack_damage;

public:
  ClapTrap(const std::string &name);
  ~ClapTrap();

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  // For debug
  int getHitPoints() const;
  int getEnergyPoints() const;
};

#endif // EX00_CRAPTRAP_HPP_
