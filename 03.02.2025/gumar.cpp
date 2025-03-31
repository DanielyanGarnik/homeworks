#include <iostream>
int main() {
    int number = 0;
    int sum = 0;
    std::cout << "mutqagreq tvanshany ";
    std::cin >> number;
    sum = (number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);
    std::cout << "ardiunq" << sum <<std::endl;
    return 0;
}

