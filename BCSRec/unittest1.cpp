#include "pch.h"  // Precompiled header for Visual Studio unit tests
#include "CppUnitTest.h"

int getPerimeter(int* length, int* width);
int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

 // Prototype for the function under test

//void setLength(int input, int* length);
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(checkperimeter)
		{
			// Testing the perimeter function with specific inputs
			int length = 11;
			int width = 19;

			int expectedPerimeter = 2 * (length + width);  // Expected perimeter: 2 * (10 + 20) = 60
			int actualPerimeter = getPerimeter(&length, &width);  // Call the function with length and width

			Assert::AreEqual(expectedPerimeter, actualPerimeter);
		}
		TEST_METHOD(TestGetArea)
		{
			int length = 11;
			int width = 20;
			int expectedArea = length * width;  // Expected result: 200

			int actualArea = getArea(&length, &width);  // Call the function

			Assert::AreEqual(expectedArea, actualArea);
        }

	};
}
