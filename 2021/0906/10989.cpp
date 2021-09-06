#include <iostream>
using namespace std;
int arr[10001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt, num;
    cin >> cnt;
    for(int i=0; i<cnt; i++)
    {
        cin >> num;
        arr[num]++;
    }
    for(int i=0; i<10001; i++)
    {
        while(arr[i] != 0)
        {
            cout << i << '\n';
            arr[i]--;
        }
    }
    return 0;
}
