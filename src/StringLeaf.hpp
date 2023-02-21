#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>

class StringLeaf : public Leaf{
    public :
        StringLeaf(const std::string& word)
        : _word {word}
        {}

        NodeKind kind() const{
            return NodeKind::STRING;
        }

        const std::string& data() const{
            return _word;
        }

        std::string print() const{
            return "\"" + data() + "\"";
        }
    
    private :
        std::string _word;
};