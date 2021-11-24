#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int max_size = -21e8;

int solve(int * num, int n)
{
    vector<int> result;
    for(int i=0; i<n; i++)
    {
        result.push_back(1);
        for(int j=0; j<i; j++)
        {
            if(num[i] > num[j])
                result[i] = max(result[i], result[j]+1);
        }
        if(result[i] > max_size)
            max_size = result[i];
    }
    return max_size;
}
int main()
{
    int n, arr[1000];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << solve(arr, n);
    return 0;
}
