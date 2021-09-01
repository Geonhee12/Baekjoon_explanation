#include <iostream>
int min(int a, int b)
{
    if(a > b)
        return b;
    else
        return a;
}
int main()
{
    int rgb[1001][3], testcase;
    int **arr;
    scanf("%d", &testcase);
    arr = (int **)malloc(sizeof(int*) * testcase);
    for(int i=0; i<testcase; i++)
        arr[i] = (int *)malloc(sizeof(int) * 3);
    for(int i=0; i<testcase; i++)
    {
        for(int j = 0; j< 3; j++)
            scanf("%d", &arr[i][j]);
    }
    rgb[1][0] = arr[0][0];
    rgb[1][1] = arr[0][1];
    rgb[1][2] = arr[0][2];
    for(int i=2; i<=testcase; i++)
    {
        rgb[i][0] = min(rgb[i-1][1], rgb[i-1][2]) + arr[i-1][0];
        rgb[i][1] = min(rgb[i-1][0], rgb[i-1][2]) + arr[i-1][1];
        rgb[i][2] = min(rgb[i-1][1], rgb[i-1][0]) + arr[i-1][2];
    }
    rgb[testcase][0] = min(rgb[testcase][0], rgb[testcase][1]);
    rgb[testcase][0] = min(rgb[testcase][0], rgb[testcase][2]);
    
    printf("%d", rgb[testcase][0]);
    
    return 0;
}
