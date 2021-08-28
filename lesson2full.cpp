#include "iostream"

int main() {
    for (int i = 10; i <= 20; i++)
        {
            if(i == 14)
            {
                continue;
            }
            std::cout << i << "\n";
        }
    return 0;
}
