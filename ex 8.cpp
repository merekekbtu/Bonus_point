#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int p = (a / 10) % 10;
    int q = a % 10;
    int f = a % 100
    int r = p + q + f;
    cout << r << endl; 
    return 0;
}

