#include <bits/stdc++.h>
using namespace std;

struct node
{

    int data;
    node *next;
    node *prev;
};
node *root = NULL;
node *tail = NULL;
void printing()
{

    node *curr_node = root;
    while (curr_node != NULL)
    {

        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    curr_node = tail;
    while (curr_node != NULL)
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->prev;
    }
}

//   void delete_last(){
//     tail =;
//   }

void insert_first(int val)
{
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (root == NULL)
        root = temp;
    else
    {

        temp->next = root;
        root = temp;
    }
}

void insert_any(int val, int p)
{
}

int main()
{

    node *obj1;
    node *obj2;
    node *obj3;

    obj1 = new node();
    obj2 = new node();
    obj3 = new node();

    obj1->data = 10;
    obj2->data = 20;
    obj3->data = 30;
    obj1->next = NULL;
    obj2->next = NULL;
    obj3->next = NULL;
    obj1->prev = NULL;
    obj2->prev = NULL;
    obj3->prev = NULL;

    obj1->next = obj2;
    obj2->next = obj3;

    obj2->prev = obj1;
    obj3->prev = obj2;

    root = obj1;
    tail = obj3;
    printing();
    // delete_last();
    insert_first(10);
    cout << endl;
    printing();
}