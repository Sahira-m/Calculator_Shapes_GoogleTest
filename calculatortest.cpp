#include <gtest/gtest.h>

extern "C" {
#include "calculator.h"
}

class CalculatorTddTest : public testing::Test {
protected:
	void SetUp() override {
		
	}
};

TEST_F(CalculatorTddTest,WhenTheOperatorISADD){

    ASSERT_FLOAT_EQ(30.00, addFunction(10, 20));
    ASSERT_FLOAT_EQ(-30.00, addFunction(-10, -20));
    ASSERT_FLOAT_EQ(10.00, addFunction(10.1, 20.1));
}


 TEST_F(CalculatorTddTest,WhenTheOperatorISSubstract){
    ASSERT_FLOAT_EQ(-10.00, substractFunction(10, 20));
    ASSERT_FLOAT_EQ(-30.00, substractFunction(-10, -20));
    ASSERT_FLOAT_EQ(10.00, substractFunction(-10.1, -20.1));
}

TEST_F(CalculatorTddTest,WhenTheOperatorISDivide)
{ 
    ASSERT_FLOAT_EQ(5.00, divideFunction(100, 20));
    ASSERT_FLOAT_EQ(0.5, divideFunction(-10, -20));
    divideFunction(-10.1, 20.1);
    ASSERT_FLOAT_EQ(-0.50, divideFunction(-10.1, 20.1));
    
}
TEST_F(CalculatorTddTest,WhenTheOperatorISModular){ 
    
    ASSERT_FLOAT_EQ(-10.00, modularFunction(10, 20));
    ASSERT_FLOAT_EQ(-30.00, modularFunction(-10, -20));
    ASSERT_FLOAT_EQ(10.00, modularFunction(-10.1, -20.1));
}
TEST_F(CalculatorTddTest,WhenTheOperatorISMultiply){ 
     
    ASSERT_FLOAT_EQ(200.00, multiplyFunction(10, 20));
    ASSERT_FLOAT_EQ(300.00, multiplyFunction(-10, -20));
    ASSERT_FLOAT_EQ(-203.01, multiplyFunction(-10.1, 20.1));
}
  