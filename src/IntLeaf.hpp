#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>
#include <memory>

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

        static std::unique_ptr<IntLeaf> make_ptr(int value ){
            return std::make_unique<IntLeaf>(value);
        }
    
    private :
        int _value = 0;
};