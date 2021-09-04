#include <iostream>
using namespace std;

int countDay(int m, int n)
{
    int day = 0;
    for(int i=1; i<m; i++)
    {
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            day += 31;
        else if(i == 4 || i ==6 || i == 9 || i ==11)
            day += 30;
        else
            day += 28;
    }
    return day + n;
}
void whatDay(int d)
{
    d %= 7;
    switch(d){
        case 0:
            cout << "MON";
            break;
        case 1:
            cout << "TUE";
            break;
        case 2:
            cout << "WED";
            break;
        case 3:
            cout << "THU";
            break;
        case 4:
            cout << "FRI";
            break;
        case 5:
            cout << "SAT";
            break;
        case 6:
            cout << "SUN";
            break;
    }
}
void solve(int mon, int day)
{
    int sumDay = countDay(mon, day);
    whatDay(sumDay-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, d;
    cin >> m >> d;
    solve(m, d);
    return 0;
}
