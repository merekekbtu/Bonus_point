#include <iostream>
#include <cctype>  // Для функций islower, isupper, tolower, toupper

// Функция для изменения регистра символа
char ChangeCase(char c) {
    if (islower(c)) {
        return toupper(c);  // Если буква строчная, преобразуем в заглавную
    } else if (isupper(c)) {
        return tolower(c);  // Если буква заглавная, преобразуем в строчную
    }
    return c;  // Если это не буква, возвращаем символ без изменений
}

int main() {
    char c;
    std::cin >> c;  // Считываем символ
    
    std::cout << ChangeCase(c) << std::endl;  // Выводим результат

    return 0;
}
