#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p = (n + 2) - (n % 2);
    cout << p;
    return 0;
}