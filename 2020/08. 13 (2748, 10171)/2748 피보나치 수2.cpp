#include <iostream>
long long fibo(int n)
{
    long long result, p2 = 1, p1 = 0;
    if(n == 1)
        result = 1;
    if(n == 0)
        result = 0;
    for(int i = 2; i<=n; i++)
    {
        result = p1+p2;
        p1 = p2;
        p2 = result;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld",fibo(n));
    
    return 0;
}
