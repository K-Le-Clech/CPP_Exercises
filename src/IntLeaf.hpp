#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>

class IntLeaf : public Leaf{
    public :
        IntLeaf(int value)
        : _value {value}
        {}

        NodeKind kind() const{
            return NodeKind::INT;
        }

        int data() const{
            return _value;
        }

        std::string print() const{
            return std::to_string(data());
        }
    
    private :
        int _value = 0;
};