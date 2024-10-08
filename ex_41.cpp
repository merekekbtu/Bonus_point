#include <iostream>
#include <cctype>  // Для функции isdigit()

bool IsDigit(unsigned char c) {
    return isdigit(c);  // Используем стандартную функцию isdigit
}

int main() {
    char c;
    std::cin >> c;  // Считываем символ
    
    if (IsDigit(static_cast<unsigned char>(c))) {  // Приводим к unsigned char
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
