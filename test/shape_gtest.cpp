#include "gtest/gtest.h"
#include "../src/polygon.h"

class ShapeTest : public testing::Test {
  protected:
    void SetUp() override {
              
    }
    
    Rectangle rectA{2,4};
    Rectangle rectB{5,5};
    Rectangle rectC{2,4};
    Square sq{5};
    Circle cirk{10}; 
};

TEST_F(ShapeTest, ShapesEqual) {
  EXPECT_TRUE(rectA == rectA) << "rectA == rectA";
  EXPECT_TRUE(rectB == rectB) << "rectB == rectB";
  EXPECT_TRUE(rectA == rectC) << "rectA == rectC";
  EXPECT_TRUE(rectB == sq) << "rectB == sq";
  EXPECT_TRUE(cirk == cirk) << "cirk == cirk";
}

TEST_F(ShapeTest, ShapesNotEqual) {
  EXPECT_FALSE(rectA == rectB) << "rectA == rectA";
  EXPECT_FALSE(rectA == cirk)  << "rectA == cirk";
  EXPECT_FALSE(rectA ==sq)     << "rectA == sq";
}