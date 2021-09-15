#include <iostream>
using namespace std;
struct Node
{
    int num;
    Node *next;
};
Node *head, *tail;


void push_front(int num)
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
        temp->next = head;
        head = temp;

    }

}

void push_back(int num)
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
int pop_front()
{
    if(head == NULL)
    {
        return -1;
    }
    int n = head->num;
    head = head->next;

    return n;
}
int pop_back()
{
    if(head == NULL)
    {
        return -1;
    }
    int n = tail->num;
    if(head->next == NULL)
    {
        tail = NULL;
        head = NULL;
    }
    else
    {
        Node *check = NULL;
        for(Node *temp = head; temp->next != NULL; temp = temp->next)
        {
            check = temp;
        }
        tail = check;
        tail->next = NULL;
    }
    return n;
}
int size()
{
    int cnt = 0;
    for(Node *temp = head; temp != NULL; temp = temp->next)
        cnt++;
    
    return cnt;
}
int empty()
{
    if(head == NULL)
        return 1;
    else
        return 0;
}
int front()
{
    if(head == NULL)
        return -1;
    return head->num;
}
int back()
{
    if(head == NULL)
        return -1;
    return tail->num;
}
int main()
{
    int n, num;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(s == "push_front")
        {
            cin >> num;
            push_front(num);
        }
        else if(s == "push_back")
        {
            cin >> num;
            push_back(num);
        }
        else if(s == "front")
            cout << front() << '\n';
        else if(s == "back")
            cout << back() << '\n';
        else if(s == "size")
            cout << size() << '\n';
        else if(s == "empty")
            cout << empty() << '\n';
        else if(s == "pop_front")
            cout << pop_front() << '\n';
        else if(s == "pop_back")
            cout << pop_back() << '\n';
    }
    return 0;
}
