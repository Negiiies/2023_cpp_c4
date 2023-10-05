#include "Charmander.hpp"
#include "Nurse.hpp"

int main(void)
{
    pkmn::Charmander charm("Daniel");
    pkmn::Nurse      nurse;

    charm.health() -= 13;
    std::cout << charm.health() << std::endl;
    nurse.heal(charm);
    std::cout << charm.health() << std::endl;
}