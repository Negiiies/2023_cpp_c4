#include "Nurse.hpp"
#include "Charmander.hpp"
#include "IPokemon.hpp"
#include "Pikachu.hpp"

const std::string pkmn::Nurse::name() const
{
    std::string name_n = "Joy";
    return name_n;
}

void pkmn::Nurse::heal(pkmn::IPokemon &charm) const
{
    if (charm.health() <= 50) {
        std::cout << "There there" << charm.name()
                  << ", you should feel way better now !" << std::endl;
    } else if (charm.health() > 50 && charm.health() < 100) {
        std::cout << "That should do it, " << charm.name() << "!" << std::endl;
    } else {
        std::cout << "You already are in tip-top shape, " << charm.name() << "!"
                  << std::endl;
    }
    charm.health() = 100;
}