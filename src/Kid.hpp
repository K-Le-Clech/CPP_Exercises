#pragma once
#include <string>
#include <ostream>
#include "PlushStore.hpp"

class Kid{


    public:
        Kid (const std::string& name, int money)
        : _money {money},
        _name {name}
        {}
    
        const std::string& get_name() const{
            return _name;
        }

        int get_money() const{
            return _money;
        }

        void buy_plush(PlushStore store){
            auto cost = store.buy(_money);
            std::cout << store.get_wealth_amount() << std::endl;
            if (cost.has_value()){
                _money -= cost.value().get_cost();
            }
        }
    
    private :
        int _money = 0;
        std::string _name;

};

std::ostream& operator<<(std::ostream& stream, const Kid& kid){
    return stream << kid.get_name() << " has " << kid.get_money() << " euros.";
}