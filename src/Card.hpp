#pragma once
#include <string>
#include "Monster.hpp"
#include "Spell.hpp"
#include "Trap.hpp"

enum class CardType{
    Monster,
    Spell,
    Trap,
};

std::string to_string(CardType elem){
    switch(elem){
        case CardType::Monster : return "Monster";
        case CardType::Spell : return "Spell";
        case CardType::Trap : return "Trap";
        default : return "";
    }
}

class Card{

    public :
        Card(const std::string& id, CardType type)
        : _id { id }
        , _type { type }
        {}

        void set_name(const std::string& name){
            _name = name;
        }

        void set_description(const std::string& description){
            _description = description;
        }

        const std::string& get_id() const{
            return _id;
        }

        CardType get_type() const{
            return _type;
        }

        const std::string& get_name() const{
            return _name;
        }

        const std::string& get_description() const{
            return _description;
        }

    private :
        std::string _id = "";
        CardType _type;
        std::string _name = "";
        std::string _description = "";
};