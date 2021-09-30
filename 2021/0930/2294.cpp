#include <iostream>
#include <vector>
#include <cmath>
#define MAX_CNT 10001;
using namespace std;
int n, k, num[100001];

vector<int> coin;

int solve(int sum)
{
    
    if(sum < 0)
        return MAX_CNT;
    if(sum == 0) return 0;
    if(num[sum] != 0)
        return num[sum];
    int best = MAX_CNT;
    for(int i=0; i<n; i++)
    {
        best = min(best, solve(sum-coin[i])+1);
    }
    num[sum] = best;
    return  best;
}
int  main()
{
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        coin.push_back(num);
    }
    int num = solve(k);
    if(num > 10000)
        cout << -1;
    else
        cout << num;
    return 0;
}
