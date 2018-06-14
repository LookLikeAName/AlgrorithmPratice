#include "tree.h"
#include <iostream>

#define DEBUG 0
#include "../config.h"

node *tree::getRoot()
{
    return ROOT;
}
node *tree::getCurrentNode()
{
    return CURRENT_NODE;
}

void tree::refreshCurrentNodeToRoot()
{
    CURRENT_NODE = ROOT;
}

void tree::moveCurrentToParentNode()
{
    CURRENT_NODE = CURRENT_NODE->parent;
}

void tree::moveCurrentToLeftNode()
{
    CURRENT_NODE = CURRENT_NODE->left;
}

void tree::moveCurrentToRightNode()
{
    CURRENT_NODE = CURRENT_NODE->right;
}

int tree::getCurrentNodeData()
{
    return CURRENT_NODE->data;
}

void tree::makeTreeByInputOrder(std::vector<int> input)
{

    if (input.size() > 0)
    {
        PRINT_LINE(input.size());
        PRINT_LINE("");
        node *currentNode;
        ROOT = new node();
        currentNode = ROOT;
        currentNode->data = input[0];
        int count = 1;
        int queueCount=0;
        /*
         * 
         * Important!!  Use queue to queue the order of node which need
         * to attach child later on.
         * 
         * 
         *************************************/
        std::vector<node *> queue;
        /************************************/
        while (count < input.size())
        {
            PRINT_LINE(count);
            PRINT("Left :");
            PRINT_LINE(input[count]);
            currentNode->left = new node();
            currentNode->left->data = input[count];
            currentNode->left->parent = currentNode;
            PRINT_LINE(currentNode->left->data);
            queue.push_back(currentNode->left);
            count++;

            PRINT_LINE(count);
            if (count >= input.size())
            {
                break;
            }
            PRINT("Right :");

            PRINT_LINE(input[count]);
            currentNode->right = new node();
            currentNode->right->data = input[count];
            currentNode->right->parent = currentNode;
           PRINT_LINE(currentNode->right->data);
            queue.push_back(currentNode->right);
            count++;

            PRINT("queue :");
            PRINT_LINE(queue.size() << " " << count);
            currentNode = queue[queueCount];
            PRINT_LINE("queue data: " << currentNode->data<<" "<<queue[queueCount]->data);
            queueCount++;
        }
    }
}