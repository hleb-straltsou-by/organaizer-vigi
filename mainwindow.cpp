#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "blankforbusinessitem.h"
#include "blankforcontactsitem.h"
#include <QDialog>
#include <QWidget>
#include <QObject>

MainWindow::MainWindow(QWidget *parent, Table* table) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->table = table;
}

MainWindow::~MainWindow()
{
    delete ui;
}

Table MainWindow::getTable()
{
    return *table;
}

void MainWindow::setTable(Table* table)
{
    this->table = table;
}

void MainWindow::on_addButton_clicked()
{
    BlankForBusinessItem* blank = new BlankForBusinessItem();
    blank->show();
    /*
    BlankForContactsItem* blank = new BlankForContactsItem();
    blank->show();

    BlankForNotesItem* blank = new BlankForNotesItem();
    blank->show();
    */
}

void MainWindow::on_businessButton_clicked()
{

}

void MainWindow::on_contactsButton_clicked()
{

}

void MainWindow::on_deleteButton_clicked()
{

}

void MainWindow::on_exitButton_clicked()
{

}

void MainWindow::on_notesButton_clicked()
{

}

void MainWindow::on_updateButton_clicked()
{

}
