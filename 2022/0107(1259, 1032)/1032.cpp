#include <iostream>
using namespace std;
string name[50];
int checked[50], n;

void isSame()
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<name[0].size(); j++)
        {
            if(name[i][j] != name[i+1][j])
                checked[j] = 1;
        }
    }
}
int main()
{
    
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> name[i];
    isSame();
    for(int i=0; i<name[0].size(); i++)
    {
        if(checked[i] == 0)
            cout << name[0][i];
        else
            cout << '?';
    }
    return 0;
}
