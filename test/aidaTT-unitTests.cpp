// Authors: Christoph Rosemann

#include "unitTests/UnitTestSuite.hh"

///~ add the unit tests by their header file(s)
#include "unitTests/tpsimple.hh"
#include "unitTests/constantbfield.hh"
#include "unitTests/matrixOps.hh"
#include "unitTests/spacevectors.hh"
using namespace UnitTesting;
using namespace std;

void addSimpleTests(UnitTestSuite& _test)
{
    _test.addTest(new tpsimple);
    _test.addTest(new constantbfield);
    _test.addTest(new matrixOps);
    _test.addTest(new spacevectors);
}



int main(int argc, char **argv)
{
    UnitTestSuite _test("aidaTT unit testing suite.");

    _test.intro();

    addSimpleTests(_test);

    // run all
    _test.run();

    _test.report();
}