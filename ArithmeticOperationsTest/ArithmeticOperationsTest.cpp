
#include "CppUnitTest.h"
extern "C" {
#include "../ArithmeticOperations/functions.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework; 


namespace ArithmeticOperationsTest
{
	TEST_CLASS(ArithmeticOperationsTest)
	{
	public:
		TEST_METHOD(CheckAddPos)
		{
			int a, b, c;
			a = 12;
			b = 5;
			
			Assert::AreEqual(17, add(a,b));
		}
		TEST_METHOD(CheckAddOneNeg)
		{
			int a, b, c;
			a =-12;
			b = 5;

			Assert::AreEqual(-7, add(a, b));
		}
		TEST_METHOD(CheckSubPos)
		{
			int a, b, c;
			a = 12;
			b = 5;
			
			Assert::AreEqual(7, subtract(a,b));
		}
		TEST_METHOD(CheckSubOneNeg)
		{
			int a, b, c;
			a = -12;
			b = 5;

			Assert::AreEqual(-17, subtract(a, b));
		}
	};
}
