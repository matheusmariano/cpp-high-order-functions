#include <iostream>
#include <vector>

template <class T>
void ForEach(std::vector<T> list, void (*fn)(T item))
{
    for (const T item : list) {
        fn(item);
    }
}

void Greet(std::string message)
{
    std::cout << message << std::endl;
}

int main()
{
    std::vector<std::string> messages = { "Hello", "World" };

    ForEach<std::string>(messages, [](std::string message) { Greet(message); });
}