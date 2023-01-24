#pragma once
#include <string>
#include <ostream>

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
    
    private :
        int _money = 0;
        std::string _name;

};

std::ostream& operator<<(std::ostream& stream, const Kid& kid){
    return stream << kid.get_name() << " has " << kid.get_money() << " euros.";
}