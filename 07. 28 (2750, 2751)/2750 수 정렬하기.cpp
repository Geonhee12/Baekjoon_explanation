#include <iostream>
int main()
{
    int n,k=1, arr[1000] ={0,}, swap;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-k; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j+1];
                arr[j+1] =arr[j];
                arr[j] = swap;
            }
        }
        k++;
    }
    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);
}
