#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString firstNumber{};
    QString secondNumber{};
    QString operation{};

    bool flag_operation{};

public slots:

    void addSymbol( QString value);

    void resetFlagsAndData();

    void addOperation(QString op);


private slots:

    void on_pb_result_clicked();
void initialView();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
