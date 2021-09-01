#include <iostream>
int main()
{
    int n, k, num=1;
    scanf("%d%d", &n, &k);
    for(int i=0; i<k; i++)
    {
        num *= n;
        n--;
        num /= i+1;
    }
    printf("%d", num);
    return 0;
}
