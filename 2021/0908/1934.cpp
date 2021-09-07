#include <iostream>
#include <algorithm>
using namespace std;


int GCD(int a, int b)
{

    if(a < b)
        swap(a, b);
    
    while(a % b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        cout << (a * b) / GCD(a, b) << '\n';
    }
    return 0;
}
