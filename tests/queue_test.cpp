#include <gtest/gtest.h>
#include "queue/queue.h"

Queue<int> q1;

TEST(QueueTEST,BASIC_TEST){
  q1.en_queue(2);
  q1.en_queue(5);
  q1.en_queue(7);
  EXPECT_EQ(q1.size(),3);
  EXPECT_EQ(q1.first(),2);
  EXPECT_EQ(q1.last(),7);
}

TEST(QueueTEST, RANGE_ERROR){
 // Expected to throw
 q1.de_queue();
 q1.de_queue();
 q1.de_queue();
  EXPECT_THROW(q1.de_queue(),std::range_error);
}