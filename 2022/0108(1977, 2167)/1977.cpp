#include <iostream>
using namespace std;
int arr[10001];
int main()
{
    for(int i=1; i<101; i++)
        arr[i * i]++;
    int m, n, sum = 0, minNum = -1, flag = 0;
    cin >> m >> n;
    for(int i=m; i<=n; i++)
    {
        if(arr[i] == 1)
        {
            if(flag == 0)
            {
                minNum = i;
                flag = 1;
            }
            sum += i;
        }
    }
    if(flag == 0)
        cout << -1;
    else
        cout << sum << ' ' << minNum;
    return 0;
}
