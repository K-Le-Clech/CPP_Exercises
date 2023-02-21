#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>
#include <memory>

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

        static std::unique_ptr<StringLeaf> make_ptr(const std::string& value ){
            return std::make_unique<StringLeaf>(value);
        }
    
    private :
        std::string _word;
};