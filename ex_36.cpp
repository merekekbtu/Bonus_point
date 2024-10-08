#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;  
    cin >> N;

    set<int> mySet;  

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;  

        if (command == "ADD") {
            int num;
            cin >> num;
            mySet.insert(num);  
        } else if (command == "PRESENT") {
            int num;
            cin >> num;
            if (mySet.count(num)) {  
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (command == "COUNT") {
            cout << mySet.size() << endl;  
        }
    }

    return 0;
}
