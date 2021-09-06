#include <iostream>
using namespace std;
struct Node
{
    int num;
    Node *next;
};
Node *head;

void push(int n)
{
    Node *temp = new Node();
    temp->num = n;
    temp->next = head;
    head = temp;
}
void top()
{
    if(head == NULL)
        cout << -1 << '\n';
    else
        cout << head->num << '\n';
}
void pop()
{
    if(head == NULL)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << head->num << '\n';
        head = head->next;
    }
}
void size()
{
    int cnt = 0;
    if(head == NULL)
    {
        cout << 0 << '\n';
        return;
    }
    for(Node *now = head; now->next != NULL; now = now->next)
        cnt++;
    cout << cnt+1 << '\n';
}
void empty()
{
    if(head == NULL)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int command;
    cin >> command;
    for(int i=0; i<command; i++)
    {
        string c;
        cin >> c;
        if(c == "push")
        {
            int num;
            cin >> num;
            push(num);
        }
        else if(c == "top")
            top();
        else if(c == "size")
            size();
        else if(c == "pop")
            pop();
        else
            empty();
    }
    return 0;
}
