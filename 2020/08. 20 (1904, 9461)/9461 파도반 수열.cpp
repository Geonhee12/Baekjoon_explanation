#include <iostream>
using namespace std;
long long arr[110] = {0, };
long long pado(int n)
{
    if(n == 1 || n == 2)
        return 1;
    if(n == 3)
        return 1;
    if(arr[n] != 0)
        return arr[n];
    else
        return arr[n] = pado(n-2) + pado(n-3);
}

int main()
{
    int n, t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        printf("%lld\n", pado(n));
    }
    return 0;
}
