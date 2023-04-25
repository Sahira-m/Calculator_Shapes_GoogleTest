#include <gtest/gtest.h>

extern "C" {
#include "game.h"
}
extern float side1, side2, side3, areaTriangle, perimeterTriangle, base, height;
class ShapeTddTest : public testing::Test {
protected:
	void SetUp() override {
		 /* This is run before EACH TEST */
    side1 = 0.00;
    side2 = 0.00;
    side3 = 0.00;
    areaTriangle = 0.00;
    perimeterTriangle = 0.00;
    base = 0.00;
    height = 0.00;
	}
};

 TEST_F(ShapeTddTest,WhenTheUserInputTriangle)
 {
    ASSERT_FLOAT_EQ(7.30, perimeterTriangles(1.1, 2.1, 4.0));
    ASSERT_FLOAT_EQ(6.00, perimeterTriangles(1.0, 2.0, 3.0));
    ASSERT_FLOAT_EQ(40.20, perimeterTriangles(10.1, 20.1, 10.0));
}
 TEST_F(ShapeTddTest,WhenTheUserInputAreaTriangle)
 {
 
    ASSERT_FLOAT_EQ(7.30, areaTriangles(1.1, 2.1));
    ASSERT_FLOAT_EQ(6.00, areaTriangles(1.1, 2.1));
    ASSERT_FLOAT_EQ(40.20, areaTriangles(1.1, 2.1));
 }
 TEST_F(ShapeTddTest,WhenTheUserInputAreaRectangle)
 {
    ASSERT_FLOAT_EQ(2.31, areaRectangles(1.1, 2.1));
    ASSERT_FLOAT_EQ(203.1, areaRectangles(10.1, 20.1));
    ASSERT_FLOAT_EQ(22.95, areaRectangles(4.5, 5.1));
 }
  TEST_F(ShapeTddTest,WhenTheUserInputPerimeterRectangle)
 {
   
    ASSERT_FLOAT_EQ(4.62, perimeterRectagles(1.1, 2.1));
    ASSERT_FLOAT_EQ(406.2, perimeterRectagles(10.1, 20.1));
    ASSERT_FLOAT_EQ(74.62, perimeterRectagles(4.1, 9.1));

 }
  TEST_F(ShapeTddTest,WhenTheUserInputAreaCircle)
 {
    ASSERT_FLOAT_EQ(3.79, areaCircle(1.1));
   
    ASSERT_FLOAT_EQ(320.31, areaCircle(10.1));

    ASSERT_FLOAT_EQ(52.78, areaCircle(4.1));
 }
  TEST_F(ShapeTddTest,WhenTheUserInputPerimeterCircle)
 {
   
     ASSERT_FLOAT_EQ(6.28, perimeterCircle(1.0));
    
     ASSERT_FLOAT_EQ(62.8, perimeterCircle(10.0));
    
     ASSERT_FLOAT_EQ(558.92, perimeterCircle(89.0));
 }
