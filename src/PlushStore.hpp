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

        int get_wealth_amount() const {
            return _amount;
        }

        unsigned int get_stock_size() const {
            return _stock;
        }

        void loan(unsigned int price){
            _amount += price;
            _interest += price * 1.1;
        }

        unsigned int get_debt_amount() const {
            return _interest;
        }

        void make_plush(unsigned int cost){
            if(_amount != 0){
                _amount -= cost;
                _stock ++;
                if(_amount < 0){
                    _amount = 0;
                }
            }
        }

    private:
        std::string _name;
        int _amount = 0;
        unsigned int _stock = 0u;
        unsigned int _interest = 0u;
        int _experience = 0;
};