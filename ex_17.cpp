#include<iostream>
using namespace std;


int main() {
int a, b, c, d;
cin >> a >> b >> c >> d;
if ( a + 1 < c || c + 1 < a || b + 1 < d || d + 1 < b)
{
cout << "NO";
}
else
{
cout << "YES";
}
return 0;
}