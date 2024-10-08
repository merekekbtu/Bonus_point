#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int i= 1;
    int sum = 0;

    while(i <= a){
    if(a % i == 0){
      sum++;
    }
   i++;   
   cout << sum;   
} 
}