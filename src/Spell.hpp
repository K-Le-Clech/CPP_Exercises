#pragma once
#include "Card.hpp"

enum class SpellType{
    Normal,
    Equip,
    Continuous,
    QuickPlay,
    Field,
};

std::string to_string(SpellType spell){
    switch(spell){
        case SpellType::Normal : return "Normal";
        case SpellType::Equip : return "Equip";
        case SpellType::Continuous : return "Continuous";
        case SpellType::QuickPlay : return "Quick-Play";
        case SpellType::Field : return "Field";
        default : return "";
    }
}

class Spell : public Card{

    public :
        Spell (const std::string& id, const std::string& name, SpellType type)
        : Card {id, CardType::Spell}
        , _spell_type {type}
    {
        Card::set_name(name);
    }

        SpellType get_spell_type() const{
            return _spell_type;
        }

    private :
        SpellType _spell_type;
};