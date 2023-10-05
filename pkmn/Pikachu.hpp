#ifndef PIKACHU_HPP_
#define PIKACHU_HPP_
#include <iostream>
#include <string>
#include <vector>
#include "IPokemon.hpp"

namespace pkmn {
class Pikachu : public IPokemon {
public:
    Pikachu(std::string surnom);
    const std::string species() const override;
    const std::string type() const override;
    const std::string name() const override;
    int               health() const override;
    int              &health() override;
    bool              fainted() override;

private:
    std::string _surnom;
    int         _health;
};
} // namespace pkmn

#endif /* ASCII_MAP_HPP_ */