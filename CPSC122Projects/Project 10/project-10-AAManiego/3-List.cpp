#include <iostream>
using namespace std;

#include "3-List.h"

ListT::ListT()
{
 length = 0;
 head = NULL;
 tail = NULL;
}

ListT::~ListT()
{
    node* curr = head;
    node* temp = curr; 
    node* tail = tail;
    while(curr != NULL)
    {
        temp = curr->next;
        delete curr;
        curr = temp;
    }
}


void ListT::Print() const
{
 node* cur = head;
 while(cur != NULL)
 {
  cout << cur->item << endl;
  cur = cur->next;
 }
}

bool ListT::IsEmpty() const
{
    if(head)
        return false;
    else
        return true;
}

itemType ListT::FindItem(itemType target) const
{
    int counter = 0;
    node* curr = head; 
    while(curr != NULL)
    {
        if(curr->item == target)
        {
             counter++;
        }
             curr = curr->next;
    }
    // if(curr->item == target)
    // {
    //     counter++;
    // }
    return counter;
}

int ListT::GetLength() const
{
    return length;
}

int ListT::DeleteItem(const itemType target)
{
    node* curr = head->next; 
    node* prev = head; 
    int counter = 0;

    while(curr)
    {
        if(curr->item == target)
        {
            node* temp = curr->next;
            prev->next = temp;
            delete curr; 
            curr = temp;
            counter++;
            length--;
        }
            prev=curr; 
            curr = curr->next;
    }
    if(head->item == target)
    {
    DeleteItemH();
    counter++;
    length--;
    }

    return counter;
}

void ListT::DeleteItemH()
{
    node* new_head = head;
    new_head = new_head->next; 
    delete head;
    head = new_head;

}

itemType ListT::GetItemH() const
{
 return head->item;
}

void ListT::PutItemH(const itemType item)
{

    node* n = new node;
    n->next = head; 
    head = n;
    n->item = item;
    length++;
}


node* ListT::PtrTo()
{
    node* prev = head;
    node* temp = head->next;
    while(prev->next != tail)
    {
        prev = temp;
        temp = temp->next;
    }
    return prev;
}
void ListT::DeleteItemT()
{
    node* new_tail = PtrTo();
    delete tail;
    tail = new_tail;
    tail->next = NULL;
    length--;
}

itemType ListT::GetItemT() const
{
    return tail->item;
}

void ListT::PutItemT(const itemType itemIn)
{
    node* t = new node;
    tail->next = t; 
    tail = t;
    t->item = itemIn;
    length++;
}