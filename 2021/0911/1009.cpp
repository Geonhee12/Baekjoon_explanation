#include <iostream>
using namespace std;



void solve(int a, int b)
{
    int mul = 1;
    for(int i=0; i<b; i++)
    {
        mul *= a;
        mul %= 10;
    }
    if(mul == 0)
        cout << 10 << '\n';
    else
        cout << mul << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
