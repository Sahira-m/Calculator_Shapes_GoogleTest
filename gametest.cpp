#include <gtest/gtest.h>

extern "C" {
#include "game.h"
}

class GameTddTest : public testing::Test {
protected:
	void SetUp() override {
		
	}
};

 TEST_F(GameTddTest,WhenTheUserEnterInput)
 {
    ASSERT_TRUE(true, game('r', 'p'))
    ASSERT_TRUE(true, game('p', 's'))
    ASSERT_TRUE(true, game('s', 'r'))
    ASSERT_TRUE(true, game('p', 'r'))
    ASSERT_TRUE(true, game('r', 's'))
    ASSERT_TRUE(true, game('s', 'p'))
}

