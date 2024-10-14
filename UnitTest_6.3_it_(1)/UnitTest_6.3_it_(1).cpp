#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3_it(1)/6.3_it(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:
        TEST_METHOD(TestCountNegative)
        {
            const int size = 6;
            int a[size] = { -5, 3, -1, 7, -6, 2 };

            int expected = 3;
            int actual = CountNegative(a, size);

            Assert::AreEqual(expected, actual);
        }

        TEST_METHOD(TestModifyNegativeElements)
        {
            const int size = 6;
            int a[size] = { -5, 3, -1, 7, -6, 2 };
            int expected[size] = { 5, 3, 1, 7, 6, 2 };

            ModifyNegativeElements(a, size);

            for (int i = 0; i < size; i++) {
                Assert::AreEqual(expected[i], a[i]);
            }
        }
    };
}
