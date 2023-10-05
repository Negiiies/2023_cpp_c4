#ifndef NURSE_HPP_
#define NURSE_HPP_
#include <iostream>
#include <string>
#include <vector>
#include "Charmander.hpp"
#include "IPokemon.hpp"
#include "Pikachu.hpp"

namespace pkmn {
class Nurse {
public:
    const std::string name() const;
    void              heal(IPokemon &charm) const;
};
} // namespace pkmn

#endif /* NURSE_HPP_ */