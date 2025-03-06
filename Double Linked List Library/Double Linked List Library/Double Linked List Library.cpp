#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;


int main()
{
    system("color f3");


    clsDblLinkedList <int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes, List is Empty! \n";
    else
        cout << "\n\nNo, List is Not Empty! \n";


    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size() << endl;


    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";



    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();


    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();


    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();


    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();


    MydblLinkedList.DeleteLastNode();
    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.PrintList();


    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size() << endl;


    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes, List is Empty! \n";
    else
        cout << "\n\nNo, List is Not Empty! \n";


    cout << "\n\nExecuting .Clear()";
    MydblLinkedList.Clear(); 
    cout << "\n\nNumber of items in the linked list = " << MydblLinkedList.Size();


    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes, List is Empty! \n";
    else
        cout << "\n\nNo, List is Not Empty! \n";




    clsDblLinkedList <int> MydblLinkedList1;

    MydblLinkedList1.InsertAtBeginning(5);
    MydblLinkedList1.InsertAtBeginning(4);
    MydblLinkedList1.InsertAtBeginning(3);
    MydblLinkedList1.InsertAtBeginning(2);
    MydblLinkedList1.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList1.PrintList();


    MydblLinkedList1.Reverse();
    cout << "\nLinked List Content after Reverse:\n";
    MydblLinkedList1.PrintList();


    clsDblLinkedList <int> ::Node* N;
    N = MydblLinkedList1.GetNode(0); 
    cout << "\nNode Value is: " << N->Value;


    cout << "\nItem(0) Value is: " << MydblLinkedList1.GetItem(0) << endl;

    cout << "\nLinked List Content:\n";
    MydblLinkedList1.PrintList();

    MydblLinkedList1.UpdateItem(0, 500);

    cout << "\nAfter Updating Item(0): \n";
    MydblLinkedList1.PrintList(); 



    cout << "\n\nLinked List Content :\n";
    MydblLinkedList1.PrintList(); 

    MydblLinkedList1.InsertAfter(0, 999);  

    cout << "\n\nAfter Insert : \n";
    MydblLinkedList1.PrintList(); 




    system("pause>0");
    return 0;
}