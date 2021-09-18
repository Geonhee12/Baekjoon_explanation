

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, num5 = 0;
    cin >> n;
    while(n > 0)
    {
        int num1 = n;
        while(num1 % 5 == 0)
        {
            num5++;
            num1 /= 5;
        }
        n--;
    }
    cout << num5;
    return 0;
}

