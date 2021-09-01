#include <iostream>
int main()
{
    int n, num[10]= {0,}, k, check=0, count = 0, mid=0;
    scanf("%d", &n);
    for(int i =0; i<n; i++)
    {
        k = n -i;
        num[0] = k;
        int j = 1;
        while(k != 0)
        {
            num[j] = k % 10;
            k = k /10;
            j++;
            
        }
        for(int l=0; l<= j; l++)
        {
            check += num[l];

        }
        if(n == check)
        {
            mid = num[0];
            count++;
            check =0;
        }
        else
            check=0;
        
        for(int m=0; m<= j; m++)
        {
            num[m] = 0;
        }
    }
    if(count == 0)
        printf("0");
    else
        printf("%d", mid);
    return 0;
}
