#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a / d == 0 || b / d == 0){
        a++;
        b++;
    }
    
    while (a <= b){
        cout << a << " ";
        a = a + 2;
         } 
    }
