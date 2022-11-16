#include <iostream>
using namespace std;

#include "3-List.h"

int main()
{
 ListT lst;
 ListT* lst1 = new ListT;

 cout << "Test Dynamic Insert and Print" << endl;
 cout << "Correct if out is 4, 3, 2, 1, 0 on subsequent lines" << endl;
 for (int i = 0; i < 5; i++)
  {
   lst1->PutItemH(i);
   lst1->Print();
  }

 //delete lst1; //necessary to invoke destructor on dynamic list
 //cout << endl;

 //  cout << "Testing: IsEmpty Test 1" << endl;
//  if(!lst1->IsEmpty())
//  {
//     cout << "List 1 is not Empty" << endl;
//  }

//  cout << "GetLength test 1" << endl;
//  cout << lst1->GetLength() << endl; 
//  cout << endl;


//  cout << "DeleteItemH test 1" << endl;
//  cout << "Output 4 through 1" << endl;
//  lst1->DeleteItemH();
//  lst1->Print(); 
//  cout << endl;

//  cout << "DeleteItemT test 1" << endl;
//  cout << "Output 4 through 1" << endl;
//  lst1->DeleteItemT();
//  lst1->Print(); 
//  cout << endl;


// List lst2; 
// lst2.PutItemH(1);
// lst2.PutItemH(2);
// lst2.PutItemH(1);
// lst2.PutItemH(2);

//  cout << "DeleteItem Test 1" << endl;
//  cout << "Deleting 2's from lst 2" << endl;
//  lst2.DeleteItem(2);
//  lst2.Print(); 
//  cout << endl;

// List lst2; 
// lst2.PutItemT(2);
// lst2.PutItemT(3);
// lst2.PutItemT(2);
// lst2.PutItemT(3);

//  cout << "DeleteItem Test 1" << endl;
//  cout << "Deleting 3's from lst 2" << endl;
//  lst2.DeleteItem(3);
//  lst2.Print(); 
//  cout << endl;



// List lst2; 
// lst2.PutItemH(1);
// lst2.PutItemH(2);
// lst2.PutItemH(1);
// lst2.PutItemH(2);
//  cout << "Find Item Test 1" << endl;
//  cout << "Finding 1's in List 2" << endl;
//  lst2.Find(1);
//  cout << lst2.Find(1) << endl;
//  lst2.Print(); 
//  cout << endl;

// List lst2; 
// lst2.PutItemT(1);
// lst2.PutItemT(2);
// lst2.PutItemT(1);
// lst2.PutItemT(2);
//  cout << "Find Item Test 1" << endl;
//  cout << "Finding 1's in List 2" << endl;
//  lst2.Find(1);
//  cout << lst2.Find(1) << endl;
//  lst2.Print(); 
//  cout << endl;



 return 0;
}
