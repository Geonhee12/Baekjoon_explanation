#include <iostream>
using namespace std;

void solve(int n)
{
    for(int i=0; i<2*n; i++)
    {
        if(i < n)
        {
            for(int j=0; j<2*n; j++)
            {
                if(j <= i || j >= (2*n-1)-i)
                    cout << '*';
                else
                    cout << ' ';
            }
        }
        else
        {
            for(int j=0; j<2*n; j++)
            {
                if(j < (2*n-1)-i || j > i)
                {
                    cout << '*';
                }
                else
                    cout << ' ';
            }
        }
        cout << '\n';
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    solve(n);
    return 0;
}
