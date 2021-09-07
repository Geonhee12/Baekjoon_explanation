#include <iostream>
#include <algorithm>
using namespace std;
int n;
struct Node // start, end 값 저장하는 구조체
{
    int start, end;
};
Node queue[1000000]; // 최대 1000000개의 입력 저장

bool comp(Node a, Node b) // 구조체 오름차순 정렬을 위한 compare
{
    if(a.start == b.start)
        return a.end < b.end;
    else
        return a.start < b.start;
}
void solve() // 길이 체크를 위한 solve 함수
{
    int start = -21e8, end = -21e8, sum = 0;
    for(int i=0; i<n; i++)
    {
        if(i == 0) // 처음 값 저장
        {
            start = queue[0].start;
            end = queue[0].end;
        }
        else // 이 외의 경우
        {
            if(queue[i].start <= end) // end보다 작거나 같으면 연결
            {
                end = max(end, queue[i].end);
            }
            else // end보다 크므로 연결되지 않음
            {
                sum += (end - start);
                start = queue[i].start;
                end = queue[i].end;
            }
        }
    }
    sum += (end - start);
    cout << sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> queue[i].start >> queue[i].end;
    sort(queue, queue+n, comp);
    solve();
    return 0;
}
