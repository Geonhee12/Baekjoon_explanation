#include <iostream>
int min_num(int a, int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int n, count[1000001] = {0, };
    scanf("%d", &n);
    count[1] = 0;
    count[2] = 1;
    count[3] = 1;
    for(int i=4; i<=n; i++)
    {
        count[i] = 1 + count[i-1];
        if(i % 2 == 0)
            count[i] = min_num(1 + count[(i/2)], count[i]);
        if(i % 3 == 0)
            count[i] = min_num(1 + count[(i/3)], count[i]);
    }
    
    printf("%d", count[n]);
    return 0;
}
