#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h, m, s, time;
    cin >> h >> m >> s >> time;
    s += time;
    m += s/60;
    s = s%60;
    h += m/60;
    m = m%60;
    h = h%24;
    cout << h <<' '<< m << ' ' << s;
    return 0;
}
