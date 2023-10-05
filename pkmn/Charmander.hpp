#ifndef CHARMANDER_HPP_
#define CHARMANDER_HPP_
#include <iostream>
#include <string>
#include <vector>
#include "IPokemon.hpp"

namespace pkmn {
class Charmander : public IPokemon {
public:
    Charmander(std::string surnom);
    const std::string species() const;
    const std::string type() const;
    const std::string name() const;
    int               health() const;
    int              &health();
    bool              fainted();

private:
    std::string _surnom;
    int         _health;
};
} // namespace pkmn

#endif /* CHARMANDER_HPP_ */