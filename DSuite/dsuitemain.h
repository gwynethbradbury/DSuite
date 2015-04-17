#ifndef DSUITEMAIN_H
#define DSUITEMAIN_H

#include <QMainWindow>

namespace Ui {
class DSuiteMain;
}

class DSuiteMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit DSuiteMain(QWidget *parent = 0);
    ~DSuiteMain();

private:
    Ui::DSuiteMain *ui;
};

#endif // DSUITEMAIN_H
