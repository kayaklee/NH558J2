#include "mylib/mylib.h"
#include "gtest/gtest.h"

TEST(MyLibTest, TestDoSomething) {
  MyLib mylib;
  mylib.doSomething();
  // Add your assertions here
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
