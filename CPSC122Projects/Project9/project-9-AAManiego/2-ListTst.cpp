/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date Submitted: Novemer 2, 2022
Assignment: Project 9
Description: Program illustrates Linked List
*/

#include "2-List.h"
#include <iostream>
#include<cstdlib>
using namespace std;



//Class-related functions
//Constructor
List::List()
{       
 length = 0;
 head = NULL;
}

//Destructor
List::~List()
{
    node* curr = head;
    node* temp = curr; 
    while(curr != NULL)
    {
        temp = curr->next;
        delete curr;
        curr = temp;
    }
}

//Head-related functions
void List::PutItemH(itemType item)
{

    node* n = new node;
    n->next = head; 
    head = n;
    n->item = item;
    length++;
    
}

itemType List::GetItemH() const
{
 return head->item;
}

void List::DeleteItemH()
{
    node* new_head = head;
    new_head = new_head->next; 
    delete head;
    head = new_head;

}


int List::DeleteItem(const itemType target)
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


//General operations on the class

void List::Print() const
{
    node* curr = head;

    while(curr != NULL)
    {
        cout << curr->item << endl;
        curr = curr->next;
    }
}

bool List::IsEmpty() const
{
    if(head)
        return false;
    else
        return true;
}

itemType List::Find(itemType target) const
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

int List::GetLength() const
{
    return length;
}