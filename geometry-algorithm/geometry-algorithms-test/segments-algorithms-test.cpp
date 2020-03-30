#include "CppUnitTest.h"

#include "../geometry-algorithm/GeometryType.h"
#include "../geometry-algorithm/SegmentAlgorithms.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace geometryalgorithmstest
{
	TEST_CLASS(segmentalgorithmtest)
	{
	public:

		TEST_METHOD(TestSegmentsIsEquals)
		{
			Point p1(2, 2);
			Point p2(4, 4);

			Assert::AreEqual(SegmentsIsEquals(p1, p2, p2, p1), true);
		}
	};
}
