#include<QApplication>
#include<QLabel>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QtWidgets>
#include<QTCore>

int main(int argc, char *argv[])
{
    //tutorial 7

    QApplication app(argc, argv);

    //QLabel *label = new QLabel("<h2>HELLO  <font color=red<i> world");
    //label->show();

    //tutorial 8
    /*
    QWidget *window=new QWidget;
    window->setWindowTitle("My app");

    QPushButton *button1=new QPushButton("one");
    QPushButton *button2=new QPushButton("two");
    QPushButton *button3=new QPushButton("three");

    QHBoxLayout *hlayout=new QHBoxLayout;
    hlayout->addWidget(button1);
    hlayout->addWidget(button2);
    hlayout->addWidget(button3);

    window->setLayout(hlayout);
    window->show();*/

    //tutorial 9
    QWidget *window=new QWidget;
    window->setWindowTitle("My app");

    QGridLayout *layout=new QGridLayout;

    QLabel *label=new QLabel("Nume:");
    QLineEdit *txtName=new QLineEdit;

    QLabel *label2=new QLabel("Prenume:");
    QLineEdit *txtName2=new QLineEdit;

    layout->addWidget(label, 0, 0);
    layout->addWidget(txtName, 0, 1);

    layout->addWidget(label2, 1, 0);
    layout->addWidget(txtName2, 1, 1);

    QPushButton *button=new QPushButton("ok");
    layout->addWidget(button, 2,0,1,2);
    //1 row 2 columns

    window->setLayout(layout);
    window->show();

    return app.exec();
}
