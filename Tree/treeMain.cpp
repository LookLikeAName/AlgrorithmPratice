#include <iostream>
#include "tree.h"
#include <vector>
#define DEBUG 0
#include "../config.h"

int main()
{
    tree binTree;
    int intArr[7] = {0, 1, 2, 3, 4, 5, 6};
    std::vector<int> inputs;
    for (int i = 0; i < sizeof(intArr) / sizeof(int); i++)
    {
        PRINT(intArr[i] << " ");
        inputs.push_back(intArr[i]);
    }
    PRINT_LINE("");
    PRINT_LINE(sizeof(intArr) / sizeof(int));
    PRINT_LINE(inputs.size());

    binTree.makeTreeByInputOrder(inputs);
    std::cout << "\nTREE!!:" << std::endl;
    std::cout << binTree.getRoot()->data << std::endl;
    std::cout << binTree.getRoot()->left->data << " " << binTree.getRoot()->right->data << std::endl;
    std::cout << binTree.getRoot()->left->left->data << std::endl;

    return 0;
}