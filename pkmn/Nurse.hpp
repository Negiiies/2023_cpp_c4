#ifndef NURSE_HPP_
#define NURSE_HPP_
#include <iostream>
#include <string>
#include <vector>
#include "Pikachu.hpp"
#include "Charmander.hpp"

namespace pkmn {
class Nurse {
public:
  const std::string name() const;
  void heal(Pikachu &pikachu) const;
};
}

#endif /* NURSE_HPP_ */