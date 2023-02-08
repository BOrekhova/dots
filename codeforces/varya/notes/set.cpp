#include <iostream>
#include <set>

int main()
{
    std::set<int> st;

    // st.insert({ 2, 1 });
    // st.insert({ 5, 6 });
    // st.insert({ 3, 4 });

    for (auto& el : st) {
        std::cout << st.first << ' ' << st.second << std::endl;
    }
}