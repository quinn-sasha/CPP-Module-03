#ifndef EX03_FRAGTRAP_HPP_
#define EX03_FRAGTRAP_HPP_

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
public:
  FragTrap();
  FragTrap(const std::string& name);
  FragTrap(const FragTrap& other);
  FragTrap& operator=(const FragTrap& other);
  virtual ~FragTrap();

  void highFivesGuys();
};

#endif // EX03_FRAGTRAP_HPP_
