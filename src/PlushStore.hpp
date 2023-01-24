#pragma once
#include <string>

class PlushStore{

    public:
        PlushStore (const std::string& name)
        : _name {name}
        {}
        const std::string& get_name() const {
            return _name;
        }

        unsigned int get_wealth_amount() const {
            return _amount;
        }

        unsigned int get_stock_size() const {
            return _stock;
        }

    private:
        std::string _name;
        unsigned int _amount = 0u;
        unsigned int _stock = 0u;
};