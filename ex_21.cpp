#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool even = a % 2 == 0 || b %  2 == 0 || c % 2 == 0;
    bool odd = a % 2 != 0 || b %  2 != 0 || c % 2 != 0;
    if (even && odd){
        cout << "YES";
    } else {
        cout << "NO";
    }
}