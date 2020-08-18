#include <iostream>
int main()
{
    long long t, n, sum, sum_1= 1, sum_2 = 0;
    scanf("%lld", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%lld", &n);
        for(int q=0; q<=n; q++)
        {
            if(n == 0)
            {
                printf("1 0\n");
                break;
            }
            if(n == 1)
            {
                printf("0 1\n");
                break;
            }
            if(q == 0 || q == 1)
                continue;
            
            sum = sum_2 + sum_1;
            if(q == n)
            {
                printf("%lld %lld\n", sum_1, sum);
            }
                sum_2 = sum_1;
                sum_1 = sum;
        }
        sum_1 = 1;
        sum_2 = 0;
    }
    
    return 0;
}
