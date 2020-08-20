#include <iostream>
long long arr[1000030] = {0, };
long long same_fibo(int n)
{
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    if(arr[n] != 0)
        return arr[n];
    else
    {
        arr[n] = same_fibo(n-1) + same_fibo(n-2);
        return arr[n] = arr[n]%15746;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", same_fibo(n));
    return 0;
}
