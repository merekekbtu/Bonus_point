#include <algorithm>
#include <set>
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    set<int>setA;
    set<int>setB;
    int p;
    for(int i = 0; i < a; i++){
        cin >> p;
        setA.insert(p);
}
for (int i = 0; i < b; i++){
    cin >> p;
    setB.insert(p);
}
bool isSubset = true;

for(int x : setB){
    if(setA.find(x) ==setA.end()){
        isSubset = false;
        break;
    }}
    if(isSubset){
        cout << "True";
    } else {
        cout << "NO";
    }



}
