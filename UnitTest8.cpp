#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\Yaryna visual studio\lab6.4.1\lab6.4.1.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8
{
	TEST_CLASS(UnitTest8)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double S;
			S = 56;
			Assert::AreEqual(S, 56.0);
		}
	};
}
