#include <iostream>

int main() {

 int number;
 std::cout << "What is your number? \n";
 std::cin >> number;
 int remainder = number % 2;
 if (remainder == 0){
     std::cout << "Your number is even \n";
 }
 
 else {
     std::cout << "Your number is odd";
 }

    return 0;
}
