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