//https://github.com/jwvg0425/ProjectArthas/wiki/함수-포인터-개념부터-std::function까지
//g++ -o bind bind.cpp      -std=c++11
//http://stackoverflow.com/questions/15048117/c-function-in-namespace-std-does-not-name-a-type

#include <string>
#include <iostream>
#include <functional>

using namespace std;

void show_text(const string & txt)
{
    std::cout << "Text: " << txt << std::endl;
}

function <void()> f = std::bind(show_text, "Bound Function");

int main(void)
{
    f();
    return 0;
}
