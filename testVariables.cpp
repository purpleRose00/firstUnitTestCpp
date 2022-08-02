#include <QtTest>
#include "variables.h"
#include "testVariables.h"


void TestVariables::testEqualityOfVariable1()
{
    int variableA = testEqualityOfVariable1;
    QVERIFY(variableA.testEqualityOfVariable1() == 68);
}
void TestVariables::testEqualityOfVariable2()
{
    QVERIFY(variableB.testEqualityOfVariable2() == 1)
};


