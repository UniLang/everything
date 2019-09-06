#include "code/utilities/types/tree/tree_traversal.hpp"
#include "gtest/gtest.h"
#include <algorithm>
#include <iostream>

TEST(bst_inorder_until_discrepancy, NonAdjacent_1) {
        /*
         6 
        /  \ 
       10   2 
      /  \ /  \ 
     1   3 7  12 
     10 and 2 are swapped
     */
    BinaryNode<int> root(6);
    BinaryNode<int> r1(10);
    BinaryNode<int> r2(2);
    BinaryNode<int> r3(1);
    BinaryNode<int> r4(3);
    BinaryNode<int> r5(7);
    BinaryNode<int> r6(12);
    root.left = &r1;
    root.right = &r2;
    root.left->left = &r3;
    root.left->right = &r4;
    root.right->left = &r5;
    root.right->right = &r6;
    bst_inorder_until_discrepancy(&root);
    std::cout << root.val << std::endl;
}