#include <iostream>
using namespace std;
struct Node
{
    int num;
    Node *next;
};
Node *head, *tail, *last;

void addNode(int num)
{
    if(head == NULL)
    {
        head = new Node();
        head->num = num;
        tail = head;
    }
    else{
        tail->next = new Node();
        tail = tail->next;
        tail->num = num;

    }
}
void pop(int cnt)
{
    int i= 1;
    for(Node *link = last; link ->next !=NULL; link = link->next)
    {
        if(cnt == 1)
        {
            cout << link->num;
            last = link->next;
            break;
            
        }
        else if(i == cnt - 1)
        {
            cout << link->next->num;
            last = link->next->next;
            link->next = link->next->next;
            break;
        }
        i++;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        addNode(i);
    last = head;
    tail->next = head;
    cout << '<';
    for(int i=0; i<n; i++)
    {
        if(i == n-1)
        {
            pop(k);
            cout << '>';
        }
        else
        {
            pop(k);
            cout << ", ";
        }
    }
    
    return 0;
}
