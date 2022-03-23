#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    arrButtons.append(ui->pushButton_1);
    arrButtons.append(ui->pushButton_2);
    arrButtons.append(ui->pushButton_3);
    arrButtons.append(ui->pushButton_4);
    arrButtons.append(ui->pushButton_5);
    arrButtons.append(ui->pushButton_6);
    arrButtons.append(ui->pushButton_7);
    arrButtons.append(ui->pushButton_8);
    arrButtons.append(ui->pushButton_9);
    arrButtons.append(ui->pushButton_10);
    srand(time(NULL));
    QRandomGenerator *rg = QRandomGenerator::global();
    for(int i = 0; i < 10; i++)
    {
        arr[i] = rg->bounded(1,10);        
        arrButtons[i]->setText(QString::number(arr[i]));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bubbleSorterButton_clicked()
{
   ui->labelSortingType->setText("You chose: bubble sorting.");
   Sorter::setSortingType(1);
}

void MainWindow::on_insertSorterButton_clicked()
{
    ui->labelSortingType->setText("You chose: insert sorting.");
    Sorter::setSortingType(2);
}


void MainWindow::on_selectSorterButton_clicked()
{
    ui->labelSortingType->setText("You chose: select sorting.");
    Sorter::setSortingType(3);
}


void MainWindow::on_simulateButton_clicked()
{
    animationThread* thread = new animationThread();
    thread->runSorting(arr, arrButtons, N, Sorter::getSortingType());
    thread->quit();
}


void MainWindow::on_remakeButton_clicked()
{
    QRandomGenerator *rg = QRandomGenerator::global();
    for(int i = 0; i < 10; i++)
    {
        arr[i] = rg->bounded(1,10);
        arrButtons[i]->move(290 + 50 * i, 50);
        arrButtons[i]->setText(QString::number(arr[i]));
    }
}


