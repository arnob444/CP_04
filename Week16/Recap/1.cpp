#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = NULL, *last = NULL;
    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
            break;

        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
    }

    Node *temp1 = head;
    while (temp1 != NULL)
    {
        Node *prev = temp1;
        Node *temp2 = temp1->next;
        while (temp2 != NULL)
        {
            if (temp1->val == temp2->val)
            {
                prev->next = temp2->next;
                delete temp2;
                temp2 = prev->next;
            }
            else
            {
                prev = temp2;
                temp2 = temp2->next;
            }
        }
        temp1 = temp1->next;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}