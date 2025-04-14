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
    void InsertLeafNode() 
    {
      cout << "Masukkan parent node  : ";
      cin >> NodeElementStruct.ParentNodeValue;
    }
};

class RootNode
{
  public: 
    void InsertRootNode() 
    {
      cout << "Masukkan root node  : ";
      cin >> NodeElementStruct.RootNodeValue;
      cout << "Root node : " << NodeElementStruct.RootNodeValue << endl;
      // if(sizeof(NodeElementStruct.RootNodeValue) > 0)
      // {
      //   cout << "Root node : " + NodeElementStruct.RootNodeValue << endl;
      //     // LeafNode leafNode;
      //     // leafNode.InsertLeafNode();
      // }
    }
};

int main() 
{
  RootNode rootNode; 
  rootNode.InsertRootNode();
  return 0;
}