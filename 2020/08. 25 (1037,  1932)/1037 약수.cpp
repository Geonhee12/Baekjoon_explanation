#include <iostream>
int main()
{
    int n, num, max, min;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        if(i == 0)
        {
            max = num;
            min = num;
        }
        else if(max < num)
            max = num;
        else if(min > num)
            min = num;
    }
    printf("%d", max*min);
    
    return 0;
}
