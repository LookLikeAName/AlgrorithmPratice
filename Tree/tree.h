
#ifndef TREE_H
#define TREE_H

#include<vector>

struct node{
    int data;
    node *parent;
    node* left;
    node* right;
};



class tree{
public:
    void makeTreeByInputOrder(std::vector <int>);
    void makeMinHeap(std::vector <int>);
    void makeMaxHeap(std::vector <int>);
    node *getRoot();
    node *getCurrentNode();
    void refreshCurrentNodeToRoot();
    void moveCurrentToParentNode();
    void moveCurrentToLeftNode();
    void moveCurrentToRightNode();
    int getCurrentNodeData();
private:
    node *ROOT;
    node *CURRENT_NODE; 
};


#endif


