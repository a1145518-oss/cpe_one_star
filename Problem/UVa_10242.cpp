#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x, y;
    bool operator==(const Point& other) const { // overloading operator
        return abs(x - other.x) < 1e-8 && abs(y - other.y) < 1e-8;
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    Point p[4];

    while (cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y >> p[2].x >> p[2].y >> p[3].x >> p[3].y) {
        Point A, B, C;
        
        if (p[0] == p[2]) {
            A = p[0]; 
            B = p[1]; 
            C = p[3];
            
        } else if (p[0] == p[3]) {
            A = p[0]; 
            B = p[1]; 
            C = p[2];
            
        } else if (p[1] == p[2]) {
            A = p[1]; 
            B = p[0]; 
            C = p[3];
            
        } else {
            A = p[1]; 
            B = p[0]; 
            C = p[2];
        }

        double Dx = B.x + C.x - A.x;
        double Dy = B.y + C.y - A.y;

        // or printf("%.3f %.3f", Dx, Dy);
        cout << fixed << setprecision(3) << Dx << " " << Dy << "\n";
    }

    return 0;
}
