#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1, set2;
    int num;

    
    while (cin.peek() != '\n') {
        cin >> num;
        set1.insert(num);
    }

    
    cin.ignore();

    
    while (cin >> num) {
        set2.insert(num);
    }

    
    int count = 0;
    for (int x : set1) {
        if (set2.find(x) != set2.end()) {
            count++;
        }
    }

    
    cout << count << endl;

    return 0;
}
