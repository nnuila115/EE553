#ifndef CHATWINDOW_H
#define CHATWINDOW_H
//#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)
//#define bcopy(b1,b2,len) (memmove((b2), (b1), (len)), (void) 0)

#include <QDialog>
//#include "unistd.h"
//#include <WinSock2.h>
#include <string.h>

namespace Ui {
class chatWindow;
}


class chatWindow : public QDialog
{
    Q_OBJECT

public:
    explicit chatWindow(QWidget *parent = 0);
    ~chatWindow();

private slots:
    void on_lineEdit_returnPressed();

private:
    Ui::chatWindow *ui;
};
/*
class chatServer : public chatWindow
{
    Q_OBJECT
private:
    int sockfd;
    char buffer[256];

public:
    void initchatServer();
    void sendMessage();
};
*/
#endif // CHATWINDOW_H
