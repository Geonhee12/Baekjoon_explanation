#include <iostream>
using namespace std;
int num[301][301];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int y, x;
    cin >> y >> x;
    for(int i=1; i<=y; i++)
    {
        for(int j=1; j<=x; j++)
        {
            cin >> num[i][j];
        }
    }
    int k, startY, startX, endY, endX, sum = 0;
    cin >> k;
    for(int i=0; i<k; i++)
    {
        sum = 0;
        cin >> startY >> startX >> endY >> endX;
        for(int q=startY; q<=endY; q++)
        {
            for(int j=startX; j<=endX; j++)
                sum += num[q][j];
        }
        cout << sum << '\n';
    }
    
    return 0;
}
