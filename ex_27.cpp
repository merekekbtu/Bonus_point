#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int sum = 0;

    while(a>0){
        if(a%10==b){
            b++;
        }
        a=a/10;
    }
    cout<<sum;
}