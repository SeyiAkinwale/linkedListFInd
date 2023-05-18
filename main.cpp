#include <string>
#include <iostream>

class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};



bool linkedListFind(Node* head, std::string target) 
{
  Node * current = head;
  while (current != nullptr)
  {
    if(current->val==target) return true;
    current=current->next;
  }
  return false;
}

int main()
{
  Node a("A");
  Node b("B");
  a.next=&b;
  std::cout<<linkedListFind(&a, "D");

  return 0;
}