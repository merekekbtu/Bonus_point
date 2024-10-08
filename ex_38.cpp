#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    // Вводим два списка чисел
    std::vector<int> list1 = {1, 3, 2};
    std::vector<int> list2 = {4, 3, 2};

    // Преобразуем их в множества для получения уникальных значений
    std::set<int> set1(list1.begin(), list1.end());
    std::set<int> set2(list2.begin(), list2.end());

    // Вектор для хранения результата
    std::vector<int> result;

    // Используем функцию set_intersection для нахождения пересечения множеств
    std::set_intersection(set1.begin(), set1.end(),
                          set2.begin(), set2.end(),
                          std::back_inserter(result));

    // Выводим результат
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
