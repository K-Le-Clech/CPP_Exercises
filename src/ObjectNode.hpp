#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"
#include <memory>
#include <map>
#include <utility>

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

        unsigned int child_count() const{
            return _nb_child;
        }

        void insert(std::string str, std::unique_ptr<Node> child){
            _nb_child ++;
            _map.insert({str, std::move(child)});
        }

        std::string print(){
            std::string answer = "{";
            for (const auto& [key, value] : _map)
                answer+= '"'+ key + '"' + ":" + value->print() + ",";
            if(answer.size() > 1){
                answer.pop_back();
            }

            return answer+"}";
        }

    private:
        std::map<std::string, std::unique_ptr<Node>> _map = {};
        unsigned int _nb_child = 0;
};