#include <iostream>
#include <set>

int main() {
    std::set<int> seen_numbers;  // Множество для хранения встреченных чисел
    int number;

    // Чтение последовательности чисел
    while (std::cin >> number) {
        if (seen_numbers.find(number) != seen_numbers.end()) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
            seen_numbers.insert(number);  // Добавляем число в множество
        }
    }

    return 0;
}
