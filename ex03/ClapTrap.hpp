#ifndef EX03_CLAPTRAP_HPP_
#define EX03_CLAPTRAP_HPP_

#include <string>

class ClapTrap {
 protected:
  std::string name;
  int hit_points;
  int energy_points;
  int attack_damage;

 public:
  ClapTrap();
  explicit ClapTrap(const std::string& name);
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

#endif  // EX03_CLAPTRAP_HPP_
