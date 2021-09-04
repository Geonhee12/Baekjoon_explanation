#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string x[101];
    int i=0;
    while(!(cin.eof()))
    {
        getline(cin, x[i]);
        i++;
    }
    for(int j=0; j<i-1; j++)
        cout << x[j] << '\n';
        
    return 0;
    
}
