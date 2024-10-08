#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int i= 1;

    while(i <= a){
    if(a % i == 0){
      cout << i << " ";
    }
   i++;      
} 
}