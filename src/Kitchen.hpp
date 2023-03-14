#pragma once
#include "../lib/Unit.hpp"
#include <memory>
#include <vector>
#include <algorithm>
#include <utility>

class Kitchen
{
    public:
        const Unit& register_unit(Unit unit){
            _unit.push_back(unit);
            return _unit.back();
        }

        const Unit* find_unit(const std::string& elem) const{

            const auto it = std::find_if(_unit.begin(), _unit.end(), [elem](const Unit& unit){return (unit.name == elem);});
            
            if(it == _unit.end()){
                return nullptr;
            }
            
            
            return &(*it);
        }




    private:
        std::vector<Unit> _unit;
};
