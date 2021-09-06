#include <iostream>
using namespace std;
int arr[1000000], temp[1000000];


void sort(int start, int end, int middle)
{
    int i = start, j = middle + 1, k = start;
    while(i <= middle && j <= end)
    {
        if(arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
        
    }
    if(i > middle)
    {
        while(j <=end)
            temp[k++] = arr[j++];
    }
    else
    {
        while(i <= middle)
            temp[k++] = arr[i++];
    }
    
    for(int i = start; i<=end; i++)
        arr[i] = temp[i];
}
void merge(int start, int end)
{
    if(end == start || end < start)
        return;
    int middle = (start+end)/2;

    merge(start, middle);
    merge(middle+1, end);
    sort(start,end, middle);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt;
    cin >> cnt;
    for(int i=0; i<cnt; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    merge(0, cnt-1);
    for(int i=0; i<cnt; i++)
        cout << arr[i] << '\n';
    return 0;
}
