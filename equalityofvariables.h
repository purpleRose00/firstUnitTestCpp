#ifndef EQUALITYOFVARIABLES_H
#define EQUALITYOFVARIABLES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class equalityOfVariables; }
QT_END_NAMESPACE

class equalityOfVariables : public QMainWindow
{
    Q_OBJECT

public:
    equalityOfVariables(QWidget *parent = nullptr);
    ~equalityOfVariables();

private:
    Ui::equalityOfVariables *ui;
};
#endif // EQUALITYOFVARIABLES_H
