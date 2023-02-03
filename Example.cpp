#include <string>
#include <iostream>

int main() {
    std::string str = "298888888888888888888888888888888888888888888888888888888888";
    long long num = std::stoll(str);
    std::cout << num << std::endl;
    return 0;
}