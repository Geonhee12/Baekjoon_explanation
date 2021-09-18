#include <iostream>
using namespace std;
struct Node{
    int num;
    Node *next;
};
Node *tail, *head;
int k;
void push(int num)
{
    if(tail == NULL)
    {
        tail = new Node();
        tail->num = num;
        tail->next = tail;
        head = tail;
    }
    else
    {
        Node *temp = new Node();
        temp->num = num;
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }
}
void pop()
{
    if(k == 1)
    {
        Node *temp = head;
        tail->next = tail->next->next;
        cout << temp->num << ", ";
        delete temp;
        
    }
    else
    {
        for(int i=1; i<k-1; i++)
        {
            head = head->next;
        }
        Node *del = new Node();
        del = head->next;
        head->next = head->next->next;
        cout << del->num << ", ";
        delete del;
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        push(i);
    cout << '<';
    while(head->next != head)
    {
        pop();
        head = head->next;
    }
    cout << head->num << '>';
    return 0;
}
