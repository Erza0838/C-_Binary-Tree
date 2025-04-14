#include <iostream>
using namespace std;

struct NodeElement
{
  int RootNodeValue;
  int ParentNodeValue;
} NodeElementStruct;

class LeafNode 
{
  public: 
    int InsertLeafNode() 
    {
      cout << "Maskkan leaf node  : ";
      cin >> NodeElementStruct.RootNodeValue;
    }
};

class RootNode
{
  public: 
    int InsertRootNode() 
    {
      cout << "Maskkan root node  : ";
      cin >> NodeElementStruct.RootNodeValue;
      switch(NodeElementStruct.RootNodeValue)
      {
        case !NULL : 
        {
          LeafNode leafNode;
          leafNode.InsertLeafNode();
        }
      }
    }
};

int main() 
{
  RootNode rootNode; 
  rootNode.InsertRootNode();
  return 0;
}