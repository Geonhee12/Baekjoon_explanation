#include <iostream>
int main()
{
    int a, b, a_arr[3] ={0,}, b_arr[3]={0, };
    scanf("%d%d", &a, &b);
    for(int i=0; i<3; i++)
    {
        a_arr[i] = a % 10;
        b_arr[i] = b % 10;
        a /= 10;
        b /= 10;
    }
    for(int j=0; j<3; j++)
    {
        if(a_arr[j] == b_arr[j])
            continue;
        if(a_arr[j] < b_arr[j])
        {
            for(int i=0; i<3; i++)
                printf("%d", b_arr[i]);
            
            break;
        }
        else
        {
            for(int i=0; i<3; i++)
                printf("%d", a_arr[i]);
            break;
        }
            
    }
}
