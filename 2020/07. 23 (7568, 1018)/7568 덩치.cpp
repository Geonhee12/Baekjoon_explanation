#include <iostream>
struct human
{
    int h;
    int w;
    int rank;
};
int main()
{
    int testcase;
    
    scanf("%d", &testcase);
    struct human arr[testcase];
    for(int i=0; i<testcase; i++)
    {
        scanf("%d%d",&arr[i].h, &arr[i].w);
        arr[i].rank=1;
    }
    for(int i=0; i<testcase; i++)
    {
        for(int j=0; j<testcase; j++)
        {
            if(i == j)
                continue;
            else
            {
                if(arr[j].h < arr[i].h && arr[j].w < arr[i].w)
                    arr[j].rank++;
            }
        }
    }
    for(int i=0; i<testcase; i++)
        printf("%d ", arr[i].rank);
}
