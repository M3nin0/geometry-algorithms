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

			Assert::AreEqual(true, SegmentsIsEquals(p1, p2, p2, p1));
		}

		TEST_METHOD(TestSegmentsEdgeIsEqualsTrue)
		{
			Point p1(2, 2);
			Point p2(4, 4);
			Point p3(5, 2);

			Assert::AreEqual(true, SegmentsEdgeIsEquals(p1, p2, p3, p2));
		}

		TEST_METHOD(TestSegmentsEdgeIsEqualsFalse)
		{
			Point p1(2, 2);
			Point p2(4, 4);
			Point p3(5, 2);
			Point p4(7, 8);

			Assert::AreEqual(false, SegmentsEdgeIsEquals(p1, p2, p3, p4));
		}

		TEST_METHOD(TestSegmentsIsOverlapTrue)
		{
			Point p1(2, 2);
			Point p2(6, 6);
			Point p3(3, 3);
			Point p4(5, 5);

			Assert::AreEqual(true, SegmentsIsOverlap(p1, p2, p3, p4));
		}

		TEST_METHOD(TestSegmentsIsOverlapFalse)
		{
			Point p1(2, 2);
			Point p2(6, 6);
			Point p3(3, 3);
			Point p4(5, 5);

			Assert::AreEqual(false, SegmentsIsOverlap(p1, p3, p2, p4));
		}

		TEST_METHOD(SegmentsIsAlignedTrue)
		{
			Point p1(1, 1);
			Point p2(3, 3);
			Point p3(4, 4);
			Point p4(6, 6);

			Assert::AreEqual(true, SegmentsIsAligned(p1, p2, p3, p4));
		}
	};
}
