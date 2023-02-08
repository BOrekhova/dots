#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> mp {
        { "one", 1 },
        { "two", 2 },
        { "three", 3 }
    };

    std::cout << mp["one"] << std::endl;

    for (auto& el : mp) { // перебрать контейнер
        std::cout << el.first << el.second << std::endl;
        // выводит, меняя местами:
        // one1
        // three3
        // two2
    }

    mp.emplace(1, "qwerty"); // так же добавляет элемент, но не требует создания пары сначала
    mp.insert(std::pair<int, std::string>(1, "ab")); // добавляет элемент

    std::cout << "FIND: " << (*res).first << std::endl;

    auto res = mp.find(1);

    std::multimap<int.std::string> multi_mp; // у него могут быть одиннаковые ключи
    // при поиске по ключу возвращает только первое вхождение
}