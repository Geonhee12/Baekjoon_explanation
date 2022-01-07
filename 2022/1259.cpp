#include <iostream>
using namespace std;
int arr[5];
void isTrue(int num, int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] != arr[size-i-1])
        {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
}
int main()
{

    while(1)
    {
        int num, i = 0;
        cin >> num;
        if(num == 0)
            break;
        while(num > 0)
        {
            arr[i++] = num % 10;
            num /= 10;
        }
        isTrue(num, i);
    }
    return 0;
}
