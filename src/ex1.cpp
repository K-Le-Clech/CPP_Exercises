#include "ex1.hpp"

void pairwise_concatenate(std::list<std::list<int>> &list1, std::list<std::list<int>> &list2){
    auto it = list2.begin();
    for(auto& lst : list1){
        concatenate(lst, *it);
        it++;
    }
}

void pairwise_concatenate(std::list<std::list<int>> &list1, std::list<std::list<int>> &&list2){
    auto it = list2.begin();
    for(auto& lst : list1){
        if(it == list2.end()){
            return;
        }
        concatenate(lst, std::move(*it));
        it++;
    }
    while(it != list2.end()){
        list1.push_back(std::move(*it));
        it++;
    }
}