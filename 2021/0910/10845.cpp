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
        tail->next = temp;
        tail = tail->next;
        tail->num = num;
    }
}
void pop()
{
    if(head == NULL)
    {
        cout << -1<< '\n';
        return;
    }
    cout << head->num<< '\n';
    head = head->next;
}
void size()
{
    int cnt = 1;
    if(head == NULL)
    {
        cout << 0<< '\n';
        return;
    }
    for(Node *last = head; last->next !=NULL; last = last->next)
    {
        cnt++;
    }
    cout << cnt<< '\n';
}
void empty()
{
    if(head == NULL)
        cout << 1<< '\n';
    else
        cout << 0<< '\n';
}
void front()
{
    if(head == NULL)
        cout << -1<< '\n';
    else
        cout << head->num<< '\n';
    
}
void back()
{
    if(head == NULL)
        cout << -1<< '\n';
    else
        cout << tail->num << '\n';
}
int main()
{
    int n, num;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s == "push")
        {
            cin >> num;
            push(num);
        }
        else if(s == "pop")
            pop();
        else if(s == "size")
            size();
        else if(s == "empty")
            empty();
        else if(s == "front")
            front();
        else
            back();
    }
    return 0;
    
}
