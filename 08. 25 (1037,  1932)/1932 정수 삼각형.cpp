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
    int n, max_num;
    int arr[501][501] = {0, };
    int sum[501][501] = {0, };
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    sum[1][1] = arr[1][1];
    for(int i = 2; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            sum[i][j] = max(sum[i-1][j-1], sum[i-1][j]) + arr[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(i==1)
            max_num = sum[n][1];
        else
            max_num = max(sum[n][i], max_num);
    }
    printf("%d", max_num);
}




