#include "Pikachu.hpp"

pkmn::Pikachu::Pikachu(const std::string surnom) {
  _surnom = surnom;
  _health = 100;
}

const std::string pkmn::Pikachu::species() const {
  std::string species_nom = "Pikachu";
  return species_nom;
}

const std::string pkmn::Pikachu::type() const {
  std::string type_nom = "Electric";
  return type_nom;
}

const std::string pkmn::Pikachu::name() const { return _surnom; }

const int pkmn::Pikachu::health() const 
{
     return (_health); 
}

int& pkmn::Pikachu:: health()
{
    return (_health);
}

int pkmn::Pikachu::fainted() {
  if (_health == 0) {
    return true;
  } else {
    return false;
  }
}