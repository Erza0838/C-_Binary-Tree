#include <iostream>
using namespace std;

class RootNode
{
  public: 
    void InsertRootNode() 
    {
      cout << "Maskkan root node  : ";
    }
};

int main() 
{
  RootNode rootNode; 
  rootNode.InsertRootNode();
  return 0;
}