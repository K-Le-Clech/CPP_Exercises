#pragma once
#include <string>
#include <optional>
#include <vector>
#include <algorithm>
#include "Plush.hpp"
#include <iostream>

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

        void loan(int price){
            _amount += price;
            _interest += price * 1.1;
        }

        int get_debt_amount() const {
            return _interest;
        }

        int make_plush(int cost){
            if(_amount != 0){
                _amount -= cost;
                _stock ++;
                if(_amount < 0){
                    _amount = 0;
                }
                _experience ++;
                if( _experience >= (_experience * cost / 100)){
                    array.push_back(cost + _experience);
                    return cost + _experience;
                }
                else{
                    array.push_back(cost + _experience * cost / 100);
                    return cost + _experience * cost / 100;
                }
            }
            return 0;
        }

        int get_experience() const {
            return _experience;
        }

        std::optional<Plush> buy(int cost){
            //return _amount >= cost ? std::optional<Plush>{cost} : std::nullopt;
            
            int min = *min_element(array.begin(), array.end());
            if(cost < min){
                return std::nullopt;
            }
            _amount += min;
            _stock --;
            for (std::vector<int>::iterator it = array.begin(); it != array.end();)
            {
                if (*it == min){
                    it = array.erase(it);
                    break;
                }
                else{
                    ++it;
                }
            }
            return std::optional<Plush>{min};
        }

    private:
        std::string _name;
        int _amount = 0;
        unsigned int _stock = 0u;
        int _interest = 0u;
        int _experience = 0;
        std::vector<int> array = {};
};