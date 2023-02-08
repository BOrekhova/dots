#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int, float, std::string> tp(1, 10.0f, "dfsf");
    std::cout << std::get<0>(t2) << std::endl;
}