#include <iostream>
using namespace std;

int main(){
    long long n, m, sub;
    cin >> n >> m;
    sub = n - m;
    if(sub < 0)
        sub = -sub;
    cout << sub;
    return 0;
}
