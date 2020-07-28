#include <iostream>
#include <stdlib.h>
int main()
{
    char arr[51][51] = {0,};
    int m, n, count_b=0, count_w = 0, count=0, min_count;
    scanf("%d%d", &m, &n);
    for(int i= 0; i< m; i++)
    {
        scanf("%s", arr[i]);
    }
    for(int i=0; i<m; i++)
    {
        if(i+7 == m)
            break;
        for(int j=0; j<n; j++)
        {
            if(j+7 == n)
                break;
            for(int k=i; k<=i+7; k++)
            {
                for(int l=j; l<=j+7; l++)
                {
                    if((k+l) % 2 == 0)
                    {
                        if(arr[k][l] == 'B')
                            continue;
                        else
                            count_b++;
                    }
                    else
                    {
                        if(arr[k][l] == 'W')
                            continue;
                        else
                            count_b++;
                    }
                }
                for(int l=j; l<=j+7; l++)
                {
                    if((k+l) % 2 == 0)
                    {
                        if(arr[k][l] == 'W')
                            continue;
                        else
                            count_w++;
                    }
                    else
                    {
                        if(arr[k][l] == 'B')
                            continue;
                        else
                            count_w++;
                    }
                }
            }
            count = count_w > count_b ? count_b : count_w;
            count_w = 0;
            count_b = 0;
            if(i==0 && j ==0)
            {
                min_count = count;
            }
            if(count < min_count)
                min_count = count;
            count = 0;
        }
    }
    printf("%d", min_count);
    
    return 0;
}
