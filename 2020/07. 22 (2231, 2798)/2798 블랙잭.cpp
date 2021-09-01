#include <iostream>
#include <stdlib.h>
int main()
{
    int size, sum, *num, next, like = -1, sum_like, sum_next;
    scanf("%d%d", &size, &sum);
    num = (int*)malloc(sizeof(int) * size);
    for(int i=0; i<size; i++)
        scanf("%d", &num[i]);
    for(int i=0; i<size; i++)
    {
        for(int j =1; j<size; j++)
        {
            for(int k=2; k<size; k++)
            {
                if( i >= j || j>=k || i>=k)
                    continue;
                if(num[i]+num[j]+num[k] > sum)
                    continue;
                if(i == 0 && j == 1 && k == 2)
                    like = num[i]+num[j]+num[k];
                else
                {
                    if(like == -1)
                        like = num[i]+num[j]+num[k];
                    next = num[i]+num[j]+num[k];
                    sum_like = sum - like;
                    sum_next = sum - next;
                    if(sum_like > sum_next)
                    {
                      if(sum_next >= 0)
                            like = next;
                    }
                }
            }
        }
    }
    if(like == -1)
        printf("0");
    else
        printf("%d", like);
}


