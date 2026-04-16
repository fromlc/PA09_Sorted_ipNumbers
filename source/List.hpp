//------------------------------------------------------------------------------
// List.hpp
// 
// List class for PA09_Sorted_ipNumbers assignment
//------------------------------------------------------------------------------
#include <cstdint>      // for uint32_t
#include <iostream>

//------------------------------------------------------------------------------
struct Node
{
    // numeric IP address
    uint32_t ipNumber;

    // pointer to the next Node, initially nullptr
    Node* pNext;

    // constructor
    Node() : ipNumber(0), pNext(nullptr) { }
};

//------------------------------------------------------------------------------
class List
{
private:
    // pointer to Node with lowest ipNumber in sorted list
    Node* pHead;

public:
    // constructor
    List();
    // destructor
    ~List();

    // public member functions
    void addNode(uint32_t ipNumber);
    void displayList();
};

//------------------------------------------------------------------------------
// constructor
//------------------------------------------------------------------------------
List::List() : pHead(nullptr) { }

//------------------------------------------------------------------------------
// destructor
//------------------------------------------------------------------------------
List::~List()
{
    Node* pDelete = pHead;

    // delete each Node, but save its pNext pointer first!
    while (pDelete != nullptr)
    {
        Node* pSave = pDelete->pNext;
        delete pDelete;
        pDelete = pSave;
    }

    // set pHead to 0 so List instance remains valid
    pHead = nullptr;
}

//------------------------------------------------------------------------------
// creates a new List Node and inserts it in ascending sorted order
//------------------------------------------------------------------------------
void List::addNode(uint32_t _ipNumber)
{
    // Your code to dynamically allocate the new Node and set its data
    // goes here.
    // #TODO

    //--------------------------------------------------------------------------
    // List insertion has four cases:
    // 
    // Case 1: The list is empty.
    // 
    // Your code to insert the new Node as the new list head and return
    // goes here.
    // #TODO

    //--------------------------------------------------------------------------
    //
    // Cases 2-4: The list is not empty, so find the insertion point.
    //

    // This code traverses the list, with p one Node behind pList,
    // to find the first Node N with an equal or higher ipNumber.

    // Use pList to inspect each Node's ipNumber
    Node* pList = pHead;
    // Use p to save the address of the previous Node (since you can't back up)
    Node* p = nullptr;

    // Check for end of list before comparing data!
    while (pList != nullptr && pList->ipNumber < _ipNumber)
    {
        p = pList;
        pList = pList->pNext;
    }

    //--------------------------------------------------------------------------
    // Case 2: If there is no equal or higher ipNumber,
    //      then insert the new Node as the new list head.

    if (p == nullptr)
    {
    // Here p, the pointer one behind pList, is nullptr.
    //      This means the new Node goes before the list head.
    // 
    // Your code that inserts the new Node as the new list head goes here.
    // #TODO

    }

    //--------------------------------------------------------------------------
    // Case 3: If the new Node has the highest ipNumber,
    //      then insert the new Node as the new list tail.

    else if (pList == nullptr)
    {
    // Here pList, the pointer inspecting each Node, is nullptr.
    //      This means the list traversal only found lower ipNumbers.
    //      The new Node has a higher ipNumber than any Node in the list.
    // 
    // Your code that inserts the new Node as the new list tail goes here.
    // #TODO

    }

    //--------------------------------------------------------------------------
    // Case 4: If the new Node has an ipNumber between two ipNumbers
    //      already in the list, then insert the new Node between these two
    //      existing Nodes.

    else
    {
    // Here both p and pList are still valid pointers.
    //      This means p points to a Node with an ipNumber less than _ipNumber,
    //      and pList points to a Node with an ipNumber equal to or greater
    //      than _ipNumber.
    // 
    // Your code to insert the new Node between these two existing nodes 
    // (p and pList) goes here.
    // #TODO

    }
}

//------------------------------------------------------------------------------
// displays all ipNumbers in list
//------------------------------------------------------------------------------
void List::displayList()
{
    std::cout << "Sorted ipNumbers:\n";

    // Your code to display all list Nodes goes here
    // #TODO

}
