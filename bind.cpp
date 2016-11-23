//https://github.com/jwvg0425/ProjectArthas/wiki/함수-포인터-개념부터-std::function까지
//http://stackoverflow.com/questions/15048117/c-function-in-namespace-std-does-not-name-a-type

/* 
build error :  error: ‘function’ does not name a type /=> -std=c++11
compile: g++ -o bind bind.cpp      -std=c++11
result : $ ./bind
Text: Bound Function
*/

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
