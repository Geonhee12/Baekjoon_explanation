#include <iostream>
using namespace std;
struct Node
{
    int num;
    Node *next;
};
Node *head;
void push(int num)
{
    Node *temp = new Node();
    temp->num = num;
    temp->next = head;
    head = temp;
}
void pop()
{
    head = head->next;
}
void sum()
{
    if(head == NULL)
    {
        cout << 0;
        return;
    }
    int sum = 0;
    Node *list;
    for(list = head; list != NULL; list = list->next)
        sum += list->num;
    
    cout << sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        if(num == 0)
            pop();
        else
            push(num);
    }
    sum();
    return 0;
}
