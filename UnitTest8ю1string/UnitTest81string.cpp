#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory8.1string/laboratory8.1string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
        TEST_METHOD(test_Count)
        {
            string str = "a,b,c,d,e,f";
            Assert::AreEqual(6, Count(str));  
        }
        TEST_METHOD(test_Change_MultipleCommas)
        {
            string str = "a,b,c,d,e,f";
            string result = Change(str);
            Assert::AreEqual("a**b**c**d**e**f", result.c_str());  
        }
	};
}
