#ifndef VDLEMAIL_H
#define VDLEMAIL_H

#include <QTcpSocket>
#include <QSslSocket>
#include <QDebug>

class VDLEmail
{
public:
    VDLEmail();
    void sendEmail(QString SmtpServer,int SmtpPort,QString SenderName,
                   QString SenderEmail,QString SenderPassword,QString ReceiveName,
                   QString ReceiveEmail,QString SubjectTitle,QString Content);
};

#endif // VDLEMAIL_H
