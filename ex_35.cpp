#include <iostream>
#include <cmath>
using namespace std;

double distanceFromOrigin(int x, int y) {
    return sqrt(x * x + y * y);
}

int main() {
    int n;
    cin >> n; 

    int x, y;
    int farthestX = 0, farthestY = 0;
    double maxDistance = -1.0;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y; 
        double dist = distanceFromOrigin(x, y);

        if (dist > maxDistance) {
            maxDistance = dist;
            farthestX = x;
            farthestY = y;
        }
    }
    cout << farthestX << " " << farthestY << endl;

    return 0;
}
