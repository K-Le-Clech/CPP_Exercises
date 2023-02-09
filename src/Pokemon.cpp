#include "Pokemon.h"

Pokemon::Pokemon(const std::string& name)
    : _name {name},
    _id { _maxId++}
    {}

Pokemon::Pokemon(const Pokemon& other)
    : _name { other._name},
    _id { _maxId++}
    {}

Pokemon& Pokemon::operator=(const Pokemon& other){
    if(this!=&other){
        _name = other._name;

    }
    return *this;
}

const std::string& Pokemon::name()const {
    return Pokemon::_name;
}

int Pokemon::id() const {
    return Pokemon::_id;
}

int Pokemon::_maxId = 0;