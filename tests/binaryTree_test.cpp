#include <gtest/gtest.h>
#include "binaryTree/binaryTree.h"
#include <cstdlib>
BinaryTree<int> b1;

TEST(BinaryTreeTest, add_100000000_TEST){
  for (int i=0;i<160;i++) b1.add(rand() % 100 + 1);
}

TEST(BinaryTreeTest, print_100_TEST){
  b1.display_sorted();
}
