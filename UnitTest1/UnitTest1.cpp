#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/lab6.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestiter
{
	TEST_CLASS(UnitTestiter)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			const int n = 13;
			int c[n] = { 33, 27, 43, 41, 15, 43, 19, 61, 17, 11, 33, 51,  5 };

			int sum = 0;
			int count = 0;

			int expectedSum = 0 +33+ 27+ 43+ 41+ 15+ 43+ 19+ 61+ 17+ 11+ 33+ 51+ 5;

			Calculate(c, n, sum, count);

			Assert::AreEqual(expectedSum, sum);
		}
	};
}