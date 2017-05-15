#include "chatwindow.h"
#include "ui_chatwindow.h"

chatWindow::chatWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatWindow)
{
    ui->setupUi(this);
}

/*void chatServer :: initchatServer(){
      int sockfd, portnum, n;
      struct sockaddr_in serv_addr;
      struct hostent *server;

      char buffer[256];
      portnum = 51717;
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      server = gethostbyname(localhost); //this needs to be the name of whatever machine is running the server, or localhost for you own machine

      if (server == NULL) {
          fprintf(stderr,"Error, no such host\n");
          exit(0);
      }

      bzero((char *) &serv_addr, sizeof(serv_addr));
      serv_addr.sin_family = AF_INET;
      bcopy((char *)server->h_addr,
           (char *)&serv_addr.sin_addr.s_addr,
           server->h_length);
      serv_addr.sin_port = htons(portnum);
      //if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
      //    error("Error connecting");
      //printf("Please enter the message: ");

}

void chatServer :: sendMessage(char buffer){
    bzero(buffer*,256);
    fgets(buffer*,255,stdin);
    int n = write(sockfd,const buffer*,strlen(buffer));
    bzero(buffer,256);
    n = read(sockfd,buffer,255);
    printf("%s\n",buffer);
}

chatWindow::~chatWindow()
{
    delete ui;
}

void chatWindow::on_lineEdit_returnPressed()
{
    //QString thestring=ui->lineEdit->text();
    //thestring=thestring.toStdString();
    std::stod(ui->lineEdit->text().toStdString());
    //send message to chat
    ui->lineEdit->setText("");
}
*/
