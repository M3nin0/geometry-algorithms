#include "CppUnitTest.h"

#include "../geometry-algorithm/GeometryType.h"
#include "../geometry-algorithm/BaseGeometryAlgorithms.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace geometryalgorithmstest
{
	TEST_CLASS(geometryalgorithmstest)
	{
	public:
		
		TEST_METHOD(TestPointIsInSegment)
		{
			Point p1(2, 2);
			Point p2(4, 4);
			Point p3(3, 3);

			Assert::AreEqual(PointIsInSegment(p3, p1, p2), true);
		}

		TEST_METHOD(TestPointIsOverSegmentPoint)
		{
			Point p1(2, 2);
			Point p2(4, 4);
			Point p3(3, 3);

			Assert::AreEqual(PointIsOverSegmentPoint(p1, p1, p2), true);
		}

	};
}
