#include <iostream>
#include <list>
#include <map>

class Graph {
public:
    std::map<int, bool> visited;
    std::map<int, std::list<int>> adj;
};