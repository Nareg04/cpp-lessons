#include "iostream"

void test(int a , int b){
    if(a < b && a % 2 != 0){
        std::cout << a <<"\n";
    }
    a++;
    test(a,b);
}
int main() {

    test(10,23);
    return 0;
}