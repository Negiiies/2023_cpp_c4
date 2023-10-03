#include "Nurse.hpp"
#include "Pikachu.hpp"
#include "Charmander.hpp"

const std::string pkmn::Nurse::name() const {
  std::string name_n = "Joy";
  return name_n;
}

void pkmn::Nurse::heal(pkmn::Pikachu &pikachu) const {
  if (pikachu.health() <= 50) {
    std::cout << "There there" << pikachu.name()
              << ", you should feel way better now!" << std::endl;
  } else if (pikachu.health() > 50 && pikachu.health() < 100) {
    std::cout << "That should do it," << pikachu.name() << std::endl;
  } else {
    std::cout << "You already are in tip-top shape, " << pikachu.name()
              << std::endl;
  }
  pikachu.health() = 100;
}