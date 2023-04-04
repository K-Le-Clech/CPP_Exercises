#pragma once
#include <list>
#include <memory>
#include "../lib/concatenate.hpp"

void pairwise_concatenate(std::list<std::list<int>> &list1, std::list<std::list<int>> &list2);

void pairwise_concatenate(std::list<std::list<int>> &list1, std::list<std::list<int>> &&list2);