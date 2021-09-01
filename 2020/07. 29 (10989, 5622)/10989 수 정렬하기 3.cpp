#include <iostream>
int main()
{
    int arr[10010] ={0,}, n, num;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        arr[num-1]++;
    }
    for(int i=0; i<10000; i++)
    {
        while(arr[i] != 0)
        {
            printf("%d\n", i+1);
            arr[i]--;
        }
    }

    return 0;
}
