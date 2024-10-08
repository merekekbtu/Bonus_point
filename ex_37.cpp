#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1, set2;
    int num;

    // Ввод первого списка
    while (cin.peek() != '\n') {
        cin >> num;
        set1.insert(num);
    }

    // Пропустить новую строку
    cin.ignore();

    // Ввод второго списка
    while (cin >> num) {
        set2.insert(num);
    }

    // Находим пересечение множеств
    int count = 0;
    for (int x : set1) {
        if (set2.find(x) != set2.end()) {
            count++;
        }
    }

    // Выводим результат
    cout << count << endl;

    return 0;
}
