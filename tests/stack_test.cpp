#include <iostream>
#include <gtest/gtest.h>
#include "stack/stack.h"
Stack<double> s1;

TEST(StackTEST, IS_EMPTY){
  
  // Expect stack to be empty.
  EXPECT_TRUE(s1.is_empty());
}

TEST(StackTEST, RANGE_ERROR){
 // Expected to throw
  EXPECT_THROW(s1.pop(),std::range_error);
}

TEST(StackTEST, PUSH_TEST){
  s1.push(6);
  s1.push(7);
  EXPECT_FALSE(s1.is_empty());
  EXPECT_EQ(s1.top(),7);
}


TEST(StackTEST, POP_TEST){
  s1.pop();
  EXPECT_EQ(s1.top(),6);
  EXPECT_FALSE(s1.is_empty());
  s1.pop();
  EXPECT_TRUE(s1.is_empty());
}

TEST(StackTEST, STACK_OVERFLOW){
  for(double i=0;i<=1000000;i++){
    s1.push(i);
  }
  EXPECT_EQ(s1.top(),1000000);
  for(double j=0;j<=1000000;j++){
    s1.pop();
  }
  EXPECT_TRUE(s1.is_empty());
}