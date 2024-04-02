#include "pch.h"
#include "Subtract.h"
#include "BoolFlipper.h"
#include "StringCompare.h"
#include "BubbleSort.h"
//TEST(SubtractOnesTest, HandlesPostiveNumbers) {
//	EXPECT_EQ(SubtractNumber(4), 3);
//}
//TEST(SubtractOnesTest, HandlesNegativeNumbers) {
//	EXPECT_EQ(SubtractNumber(-5), -6);
//}
//
//TEST(BoolFlipperTest, HandlesFalse)
//{
//	EXPECT_EQ(BoolFlipper(false), true);
//}
//
//TEST(BoolFlipperTest, HandlesTrue)
//{
//	EXPECT_EQ(BoolFlipper(true), false);
//}
//
//TEST(StringCompareTest, HandlesEqualStrings)
//{
//	EXPECT_EQ(StringCompare("string","string"), true);
//}
//TEST(StringCompareTest, HandlesUnequalStrings)
//{
//	EXPECT_EQ(StringCompare("string","wrongString"), false);
//}
//TEST(StringCompareTest, HandlesCasing)
//{
//	EXPECT_EQ(StringCompare("string","STRING"), false);
//}

TEST(BubbleSortTest, HandlesEmptyOutcome)
{
	std::vector<int> expectedNumbers{ 0 };
	std::vector<int> numbers;
	EXPECT_EQ(BubbleSort(numbers), expectedNumbers);
}
TEST(BubbleSortTest, HandleGoodOutCome)
{
	std::vector<int> expectedNumbers {1, 2, 3, 4, 5};
	std::vector<int> numbers {3, 4, 1, 2, 5};
	EXPECT_EQ(BubbleSort(numbers), expectedNumbers);
}
TEST(BubbleSortTest, HandlesNegativeSwap)
{
	std::vector<int> expectedNumbers{ -2, 1};
	std::vector<int> numbers{1, -2};
	EXPECT_EQ(Swap(numbers, 0), expectedNumbers);
}
TEST(BubbleSortTest, HandlesOrganizedVector)
{
	std::vector<int> expectedNumbers{ 1, 2, 3, 4, 5 };
	std::vector<int> numbers{ 1, 2, 3, 4, 5 };
	EXPECT_EQ(BubbleSort(numbers), expectedNumbers);
}
TEST(BubbleSortTest, HandlesEquivalent)
{
	std::vector<int> expectedNumbers{ 1, 1 };
	std::vector<int> numbers{ 1, 1 };
	EXPECT_EQ(Swap(numbers, 0), expectedNumbers);
}
