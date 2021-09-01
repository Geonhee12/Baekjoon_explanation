#include <iostream>
int main()
{
    int n;
    char i = 0, k, num[10] = {0,}, sort[10] ={0,};
    scanf("%d", &n);
    while(n != 0)
    {
        num[i] = n % 10;
        n /= 10;
        i++;
    }
    for(int j = 0; j<i; j++)
    {
        k = num[j];
        sort[k]++;
    }
    
    for(int l = 9; l>=0; l--)
    {
        while(sort[l] != 0)
        {
            printf("%d", l);
            sort[l]--;
            
        }
    }
    
    return 0;
}
