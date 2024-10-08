#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int sum = 0;

    while(b>0){
        if(b%10==a){
            sum++;
        }
        b=b/10;
    }
    cout<<sum;
}