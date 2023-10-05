#include "Charmander.hpp"

pkmn::Charmander::Charmander(const std::string surnom)
{
    _surnom = surnom;
    _health = 100;
}

const std::string pkmn::Charmander::species() const
{
    std::string species_nom = "Charmander";
    return species_nom;
}

const std::string pkmn::Charmander::type() const
{
    std::string type_nom = "Fire";
    return type_nom;
}

const std::string pkmn::Charmander::name() const
{
    return _surnom;
}

int pkmn::Charmander::health() const
{
    return (_health);
}

int &pkmn::Charmander::health()
{
    return (_health);
}

bool pkmn::Charmander::fainted()
{
    if (_health == 0) {
        return true;
    } else {
        return false;
    }
}