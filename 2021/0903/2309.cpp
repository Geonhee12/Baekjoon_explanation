#include <iostream>
#include <algorithm>
using namespace std;
int people[7], used[9], arr[9], flag = 0;
void solve(int count, int sum)
{
    if(flag == 1)
        return;
    if(sum > 100 || count > 7)
        return;
    if(count == 7 && sum == 100)
    {
        sort(people, people+7);
        for(int i=0; i<7; i++)
            cout << people[i] << '\n';
        flag = 1;
        return;
    }
    for(int i=0; i<9; i++)
    {
        if(used[i] == 1) continue;
        used[i] = 1;
        people[count] = arr[i];
        solve(count+1, sum + arr[i]);
        used[i] =0;
        people[count] = 0;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<9; i++)
        cin >> arr[i];
    solve(0, 0);
    return 0;
}
