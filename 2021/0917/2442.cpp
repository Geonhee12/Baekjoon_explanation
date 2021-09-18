#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int j = n-i, m = n+i;
        for(int k=1; k<2*n; k++)
        {
        
            
            if(k > j && k < m)
                cout << '*';
            if(k <= j)
                cout << ' ';
        }
        cout << '\n';
        
        
    }
    return 0;
}
