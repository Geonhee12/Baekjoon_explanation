#include <iostream>
#include <algorithm>
using namespace std;
long long n, cnt;

int value(long long idx)
{
    long long sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += min(n, idx/i);
    }
    if(sum >= cnt)
        return 1;
    else
        return 0;
}
void binarySearch()
{
    long long k = 0;
    for(long long i=cnt; i>=1; i /=2)
    {
        while(!value(i+k))
        {
            k += i;
        }
        

    }
    cout << k + 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> cnt;
    binarySearch();
    return 0;
}
