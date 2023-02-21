#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"

class ArrayNode : public Node{

    public:
        ArrayNode()
        {}

        NodeKind kind() const{
            return NodeKind::ARRAY;
        }

        std::string print() const{
            return "[]";
        }
};