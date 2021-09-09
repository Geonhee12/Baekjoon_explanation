#include <iostream>
using namespace std;

void solve(string s)
{
    int cnt = 0;
    for(int i=0; i<s.size(); i++)
    {
        
        if(s[i] == '(')
            cnt++;
        else
            cnt--;
        
        if(cnt < 0)
        {
            cout << "NO" <<'\n';
            return;
        }
    }
    if(cnt > 0)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        solve(s);
    }
    
    
    return 0;
}
