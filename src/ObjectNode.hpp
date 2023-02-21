#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
#include <memory>
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

        static std::unique_ptr<ObjectNode> make_ptr(){
            return std::make_unique<ObjectNode>();
        }
};