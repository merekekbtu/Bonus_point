#include <iostream>
#include <cctype> 

bool IsDigit(unsigned char c) {
    return isdigit(c);  
}

int main() {
    char c;
    std::cin >> c;  
    
    if (IsDigit(c)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
