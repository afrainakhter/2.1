/* 

Afrain Akhter
20210104113

*/

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *root = NULL;

void printing()
{

    node *curr_node = root;
    while (curr_node != NULL)
    {

        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    cout << endl;
}

void last_Node()
{
    node *curr_node = root;
    while (true)
    {
        curr_node = curr_node->next;

        if (curr_node->next == NULL)

            break;
    }
    cout << curr_node->data;
    cout << endl;
}

void searching()
{

    cout << "ENTER:";
    int p;

    cin >> p;
    node *y = y;
    while (y)

    {
        if (y->data == p)
        {
            cout << "found";
            return;
        }
        y = y->next;
    }
    cout << "not found";
}

int main()
{
    node *obj1;
    node *obj2;
    node *obj3;
    node *obj4;
    obj1 = new node();
    obj2 = new node();
    obj3 = new node();
    obj4 = new node();

    obj1->data = 10;
    obj2->data = 20;
    obj3->data = 30;
    obj4->data = 40;

    // obj1.next = NULL;
    // obj2.next = NULL;
    // obj3.next = NULL;
    obj4->next = NULL;
    // cout << obj1.data << " " << obj2.data << " " << obj3.data << " " << obj4.data<<endl;

    obj1->next = obj2;
    obj2->next = obj3;
    obj3->next = obj4;

    root = obj1;

    // cout << obj1->data;
    // cout << endl;
    // cout << obj1->next->data;
    // cout << endl;
    // cout << obj1->next->next->data;
    // cout << endl;
    // cout << obj1->next->next->next->data;




    cout << "print data" << endl;
     printing();
     cout << "Last Node" << endl;

     last_Node();

    cout << "Searching" << endl;
    searching();//search function run when comment previous lines otherwise getting error.
}