#ifndef EX02_FRAGTRAP_HPP_
#define EX02_FRAGTRAP_HPP_

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  explicit FragTrap(const std::string& name);
  FragTrap(const FragTrap& other);
  FragTrap& operator=(const FragTrap& other);
  ~FragTrap();

  void highFivesGuys();
};

#endif  // EX02_FRAGTRAP_HPP_
