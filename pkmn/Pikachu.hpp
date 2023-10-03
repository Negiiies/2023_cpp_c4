#ifndef PIKACHU_HPP_
#define PIKACHU_HPP_
#include <iostream>
#include <string>
#include <vector>

namespace pkmn {
class Pikachu {
public:
  Pikachu(std::string surnom);
  const std::string species() const;
  const std::string type() const;
  const std::string name() const;
  const int health() const;
    int& health();
  int fainted();

private:
  std::string _surnom;
  int _health;
};
} // namespace pkmn

#endif /* ASCII_MAP_HPP_ */