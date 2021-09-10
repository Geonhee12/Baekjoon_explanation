#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
void search(int num, int start, int end)
{
    int middle = (start+end)/2;
    if(num == arr[middle])
    {
        cout << 1 << '\n';
        return;
    }
    if(start == end)
    {
        cout << 0 << '\n';
        return;
    }

    if(num < arr[middle])
        search(num, start, middle);
    else
        search(num, middle+1, end);
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    cin >>m;
    for(int i=0; i<m; i++)
    {
        int num;
        cin >> num;
        search(num, 0, n);
    }
    return 0;
}
