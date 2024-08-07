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

void insert_at_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void print_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << "->";
        tmp = tmp->next;
    }
    if (tmp == NULL)
    {
        cout << "NULL";
    }
    cout << endl;
}

void insert_at_position(Node *&head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Input" << endl;
            return;
        }
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
}

void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Input" << endl;
            return;
        }
    }
    if (tmp == NULL)
    {
        cout << "Invalid Input" << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head not available" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "1. Insert at tail" << endl;
        cout << "2. Print the list" << endl;
        cout << "3. Exit" << endl;
        cout << "4. Insert at position" << endl;
        cout << "5. Intert at head" << endl;
        cout << "6. Delete from position" << endl;
        cout << "7. Delete Head" << endl;
        int op, v;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter a value : ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_list(head);
        }
        else if (op == 3)
        {
            break;
        }
        else if (op == 4)
        {
            int pos;
            cin >> pos;
            cin >> v;
            if (pos == 0)
                insert_at_head(head, v);
            else
                insert_at_position(head, pos, v);
        }
        else if (op == 5)
        {
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 6)
        {
            int pos;
            cin >> pos;
            if (pos == 0)
                delete_head(head);
            else
                delete_from_position(head, pos);
        }
        else if (op == 7)
        {
            cout << "Delete head successfully!" << endl;
            delete_head(head);
        }
    }
    return 0;
}