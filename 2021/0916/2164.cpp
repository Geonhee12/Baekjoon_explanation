#include <iostream>
using namespace std;
struct Node
{
    int num;
    Node *next;
};
Node *head, *tail;
void push(int num)
{
    if(head == NULL)
    {
        head = new Node();
        head->num = num;
        tail = head;
    }
    else
    {
        Node *temp = new Node();
        temp->num = num;
        tail->next = temp;
        tail = temp;
    }
}
void pop() // 맨 앞에 한장 빼기
{
    Node *newHead = head->next;
    delete head;
    head = newHead;
}
void switching() // 두번째 맨 뒤로 보내기
{
    Node *temp = new Node({head->num, NULL}); // 복사해서 보내고
    tail->next = temp;
    tail = temp;
    pop(); // 원래 위치 해당값 pop해주기
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        push(i);
    }
    while(head != tail)
    {
        pop();
        switching();
    }
    cout << head->num;
    return 0;
}
