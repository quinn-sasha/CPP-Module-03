#ifndef EX02_CRAPTRAP_HPP_
#define EX02_CRAPTRAP_HPP_

#include <string>

class ClapTrap {

protected:
  std::string name;
  int hit_points;
  int energy_points;
  int attack_damage;

public:
  ClapTrap();
  ClapTrap(const std::string& name);
  ClapTrap(const std::string& name, int hit_points, int energy_points,
           int attack_damage);
  ClapTrap(const ClapTrap& other);
  ClapTrap& operator=(const ClapTrap& other);
  virtual ~ClapTrap();

  virtual void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  // For debug
  int getHitPoints() const;
  int getEnergyPoints() const;
};

#endif // EX02_CRAPTRAP_HPP_
