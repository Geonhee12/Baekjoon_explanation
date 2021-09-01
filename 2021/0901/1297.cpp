#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    double a, h, w;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> h >> w;
    a = a * a;
    h = h * h;
    w = w * w;
    double width, height;
    width = a * (w / (w+h));
    height = a * (h/(w+h));
    cout << int(sqrt(height)) << ' ' << int(sqrt(width));
    return 0;
}
