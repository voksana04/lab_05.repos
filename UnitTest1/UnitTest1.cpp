#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_5.1/lab_5.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(2, 4);
			Assert::AreEqual(t, 2.0717, 0.00001);
		}
	};
}