#icnlude < iostream>

std::string RandomString(int ch)
{
    const int ch_MAX = 26;
    char alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z' };
    std::string result = "";
    for (int i = 0; i < ch; i++)
        result = result + alpha[rand() % ch_MAX];

    return result;
}

class Engine {
public:
    Engine(int hp)
    {
        this->hp = hp;
    }

private:
    unsigned hp;
};

class Car_ch {
public:
protected:
    unsigned weight;
    unsigned wheelSize;
};

class Car : public Car_ch {
public:
    Car(Engine engine, std::string mark, unsigned weight)
    {
        this->engine = engine;
        this->mark = mark;
        this->weight = weight;
    }

private:
    std::string mark;
    unsigned weight;
    Engine engine;
};

int main()
{
    Engine engine(500);
    Car* car = new Car(engine, "Subaru", 5)
}