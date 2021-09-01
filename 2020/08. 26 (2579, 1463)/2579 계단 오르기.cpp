#include <iostream>
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n, st[301] = {0, }, sum[301] = {0, };
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &st[i]);
        if(i == 1)
            sum[1] = st[1];
        else if(i == 2)
            sum[2] = st[1] + st[2];
        else
        {
            sum[i] = max(sum[i-3] + st[i] + st[i-1], sum[i-2]+ st[i]);
        }
    }
    printf("%d", sum[n]);
    
    return 0;
}
