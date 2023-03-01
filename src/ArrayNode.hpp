#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
#include <memory>
#include <vector>
#include <string>
#include <utility>

class ArrayNode : public Node{

    public:
        ArrayNode()
        {}

        NodeKind kind() const{
            return NodeKind::ARRAY;
        }

        std::string print() const{
            std::string answer = "[";
            for(auto it = _array.begin(); it != _array.end(); it++){
                if(it != _array.begin()){
                    answer += ",";
                }
                answer += (*it)->print();
            }
            
            return answer + "]";
        }

        static std::unique_ptr<ArrayNode> make_ptr(){
            return std::make_unique<ArrayNode>();
        }

        int child_count() const{
            return _nb_fils;
        }
    
        void push_back(std::unique_ptr<Node> fils){
            _nb_fils++;

            _array.push_back(std::move(fils));
        }
   
    private:
        std::vector<std::unique_ptr<Node>> _array = {};
        int _nb_fils = 0;
};