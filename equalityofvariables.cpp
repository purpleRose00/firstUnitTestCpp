
//#include "ui_equalityofvariables.h"
#include <iostream>
#include <QtTest>

using namespace std;
//мейн програма, сума = Int
//тест в програмата, който сравнява отговора, с операцията и входните данни.
//поне 2 тест кейса.
//да репортва за fails (базисно ниво)
//трябва да преведеа това на std
//equalityOfVariables::equalityOfVariables(QWidget *parent){}
int equalityOfVariables ()
{
    int variableA = 68;
    int variableB = 1;
    int result;
    result = variableA + variableB;
    cout << result << endl;
    return 0;
}

