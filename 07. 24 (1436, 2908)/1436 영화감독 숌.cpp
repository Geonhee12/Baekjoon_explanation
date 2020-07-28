#include <iostream>
int main()
{
    int arr[100] = {0,}, num[1000000] = {0,};
    int n, k, j=0, a=0;
    scanf("%d", &n);
    for(int i=666; i< 5000000; i++)
    {
        k = i;
        while(k != 0)
        {
            arr[j] = k % 10 ;
            k /= 10;
            j++;
        }
        for(int l=0; l<j; l++)
        {
            if(l < j-2)
            {
                if(arr[l] == arr[l+1] && arr[l] == arr[l+2] && arr[l] == 6)
                {
                    
                    num[a] = i;
                    a++;
                    break;
                }
            }
        }
        j=0;
    }
    printf("%d", num[n-1]);
}
