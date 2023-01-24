#pragma once

class Plush{
    public :
        Plush(){}
        Plush(int cost)
            : _cost {cost}
            {}
        

        int get_cost() const{
            return _cost;
        }

        void set_cost(int new_cost) {
            _cost = new_cost;
        }


    private :
        int _cost = 10;
};