#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
#include <memory>

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

        static std::unique_ptr<ArrayNode> make_ptr(){
            return std::make_unique<ArrayNode>();
        }

        int child_count(){
            return 0;
        }
};