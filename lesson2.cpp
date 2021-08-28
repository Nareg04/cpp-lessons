#include "iostream"

int main(){

    int one = 0;
    int two = 1;
    int three = 0;
    for (int i = 0; i <= 15; i++)
    {
        three = one + two;
        std::cout << three << "\n";
        one = two;
        two = three;
    }
    std::cout << one << "\n" << two << "\n";
    return 0;
}