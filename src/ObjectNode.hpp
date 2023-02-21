#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
class ObjectNode : public Node{
    public:
        ObjectNode()
        {}

        NodeKind kind() const{
            return NodeKind::OBJECT;
        }

        std::string print() const{
            return "{}";
        }
};