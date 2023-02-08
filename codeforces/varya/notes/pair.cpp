#include <iostream>
#include <tuple>

int main()
{
    std::pair<int, std::string> mp(1, "Petr");
    std::cout << mp.first << ' ' << mp.second << std::endl;
}