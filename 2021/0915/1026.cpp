#include <iostream>
#include <algorithm>
using namespace std;
int a[50], b[50], c[50], usedB[50];
int maxNum = -21e8, maxIndex = -1;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> b[i];
    sort(a, a+n);
    for(int i=1; i<=n; i++)
    {
        maxNum = -21e8;
        for(int j=0; j<n; j++)
        {
            if(usedB[j] != 0)
                continue;
    
            if(maxNum < b[j])
            {
                maxNum = b[j];
                maxIndex = j;
            }
            
        }
        usedB[maxIndex] = i;
    }
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(usedB[j] == i)
            {
                sum += a[i-1] * b[j];
            }
        }
    }
    cout << sum;
    return 0;
}
