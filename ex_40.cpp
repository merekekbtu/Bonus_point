#include <iostream>
#include <cctype>  // Для функции isdigit()

bool IsDigit(unsigned char c) {
    return isdigit(c);  // Используем стандартную функцию isdigit
}

int main() {
    char c;
    std::cin >> c;  // Считываем символ
    
    if (IsDigit(c)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
