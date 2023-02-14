#pragma once
#include <string>
#include "Card.hpp"

enum class Attribute{
    Dark,
    Divine,
    Earth,
    Fire,
    Light,
    Water,
    Wind,
};

std::string to_symbol(Attribute attr){
    switch(attr){
        case Attribute::Dark : return u8"闇";
        case Attribute::Divine : return u8"神";
        case Attribute::Earth : return u8"地";
        case Attribute::Fire : return u8"炎";
        case Attribute::Light : return u8"光";
        case Attribute::Water : return u8"水";
        case Attribute::Wind : return u8"風";
        default : return u8"";
    }
}

class Monster : public Card {

    public :
        Monster (const std::string& id, const std::string& name, Attribute attribute, const std::string& race, int atk, int def)
        : Card {id, CardType::Monster}
        , _atk { atk }
        , _def {def}
        , _attribute {attribute}
        , _race {race}
        {
            Card::set_name(name);
        }

        Attribute get_attribute() const {
            return _attribute;
        }

        int get_atk() const{
            return _atk;
        }

        int get_def() const{
            return _def;
        }

        const std::string get_race() const{
            return _race;
        }

        std::string get_description() const {
            return "[" + get_race() + "]\n" + Card::get_description() + "\nATK/" + std::to_string(get_atk()) + " DEF/" + std::to_string(get_def()); 
        }

    private :
        int _atk = 0;
        int _def = 0;
        Attribute _attribute;
        std::string _race = "";
};