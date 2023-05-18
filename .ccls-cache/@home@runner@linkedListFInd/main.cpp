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


//recursive
bool linkedListFind(Node* head, std::string target) 
{
  if (head != nullptr) return false;
  else if (head->val ==target) return true;
  else linkedListFind(head->next,target);  
}

int main()
{
  Node a("A");
  Node b("B");
  a.next=&b;
  std::cout<<linkedListFind(&a, "A");

  return 0;
}