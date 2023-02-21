#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
#include <memory>
#include <vector>
#include <string>

class ArrayNode : public Node{

    public:
        ArrayNode()
        {}

        NodeKind kind() const{
            return NodeKind::ARRAY;
        }

        std::string print() const{
            std::string answer = "[";
            for(auto elem : _array){
                answer += "," + std::to_string(elem);
            }
            return answer + "]";
        }

        static std::unique_ptr<ArrayNode> make_ptr(){
            return std::make_unique<ArrayNode>();
        }

        int child_count() const{
            return _nb_fils;
        }

        void push_back(std::unique_ptr<ArrayNode> fils){
            _nb_fils++;

        }
    
    private:
        std::vector<Node> _array = {};
        int _nb_fils = 0;
};