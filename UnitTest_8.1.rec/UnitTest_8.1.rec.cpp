#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1.rec/lab_8.1.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = "abcooobbaoooocab";
			int count = Count(str, 0);
			Assert::AreEqual(3, count);

		}
	};
}
