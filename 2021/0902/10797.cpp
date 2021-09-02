#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num, check, count =0;
    cin >> num;
    for(int i=0; i<5; i++)
    {
        cin >> check;
        if(check == num)
            count++;
    }
    cout << count;
    return 0;
}