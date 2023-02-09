#pragma once

#include <string>
#include <string>
#include <memory>

// A creature that is cute and can fight other ones.
class Pokemon
{
    public :
        Pokemon (const std::string& name);
        Pokemon(const Pokemon& other);
        Pokemon& operator=(const Pokemon& other);
        const std::string& name() const;
        int id() const;

    private:
        std::string _name;
        static int _maxId;
        int _id;
};

class PokemonPtr {


};
