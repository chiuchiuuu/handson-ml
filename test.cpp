#include <iostream>
#include <string>

typedef struct PersonData
{
    string name;
    string family_name；
    int age;
} PersonData;

void foo(PersonData *visitor)
{
    string name = visitor->name;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    return 0;
}