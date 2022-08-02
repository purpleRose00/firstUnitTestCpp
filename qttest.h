#ifndef QTTEST_H
#define QTTEST_H

#include <QObject>
#include <QtTest>
#include <equalityofvariables.h>
class QtTest : public QObject
{
    Q_OBJECT
private:
    bool myCondition()
    {
        return true;
    }
private slots:
    void initTestCase()
    {
        qDebug("Called before everything else.");
    }

    void myFirstTest()
    {
        QVERIFY(true); // check that a condition is satisfied
        QCOMPARE(69,result); // compare two values
    }
    void mySecondTest()
    {
        QVERIFY(myCondition());
        QVERIFY(1 != 2);
    }
    void cleanupTestCase()
    {
        qDebug("Called after myFirstTEst and mySecondTest.");
    }
};

#endif // QTTEST_H
