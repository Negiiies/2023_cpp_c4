#ifndef IPOKEMON_HPP_
#define IPOKEMON_HPP_
#include <iostream>
#include <string>
#include <vector>

namespace pkmn {
class IPokemon {
public:
    virtual ~IPokemon()                       = default;
    virtual const std::string species() const = 0;
    virtual const std::string type() const    = 0;
    virtual const std::string name() const    = 0;
    virtual int               health() const  = 0;
    virtual int              &health()        = 0;
    virtual bool              fainted()       = 0;
};
} // namespace pkmn

#endif /* IPOKEMON_HPP_ */