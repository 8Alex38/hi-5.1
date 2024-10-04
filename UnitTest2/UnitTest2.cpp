#include "pch.h"
#include "CppUnitTest.h"
#include "../50,51/50,51.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest050
{
	TEST_CLASS(UnitTest050)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 3;
			double y = 4;
			double test_var = (x * x + y * y) / (1 + x * x + y * y);
			Assert::AreEqual(test_var, h(x, y));
		}
	};
}
