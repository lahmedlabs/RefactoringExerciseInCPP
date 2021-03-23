#include "pch.h"
#include "../RefactoringExercise/Robot.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  }

TEST(RobotTest, testMarkWorks) {
	Robot robot = Robot("Mark");
	robot.order(0);
	ASSERT_EQ("Mark walks.", robot.getResult());
}

TEST(RobotTest, testMarkStops) {
	Robot robot = Robot("Mark");
	robot.order(1);
	ASSERT_EQ("Mark stops.", robot.getResult());
}

TEST(RobotTest, testMarkjumps) {
	Robot robot = Robot("Mark");
	robot.order(2);
	ASSERT_EQ("Mark jumps.", robot.getResult());
}
TEST(RobotTest, testError) {
	Robot robot = Robot("Mark");
	robot.order(3);
	ASSERT_EQ("Error!", robot.getResult());
}