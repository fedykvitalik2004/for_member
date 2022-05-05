#include "pch.h"
#include "CppUnitTest.h"
#include "../Parallelepiped.h"
#include "../Parallelepiped.cpp"
#include "../Volume.h"
#include "../Volume.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTlab41OOP
{
	TEST_CLASS(UTlab41OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Parallelepiped t(3,6,0.5);
			double a = t.volume();
			Assert::AreEqual(9.0, a);
		}
	};
}
