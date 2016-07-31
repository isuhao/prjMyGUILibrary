#ifndef PRJMYGUILIBRARY_H
#define PRJMYGUILIBRARY_H

#include "prjmyguilibrary_global.h"
#include <QStringList>
#include <QFileDialog>
#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <QInputDialog>

enum MsgType{
    Information,
    Question,
    Error,
    Warning
};

class PRJMYGUILIBRARYSHARED_EXPORT PrjMyGUILibrary
{
public:
    PrjMyGUILibrary();
    QString fnShowSingleFileSelectionDialog(QWidget *parent, QString strFileFilter="Text Files (*.txt)", QString strTitle="Open File", QString strDefaultDirectory="");
    QStringList fnShowMultipleFileSelectionDialog(QWidget *parent, QString strFileFilter="Text Files (*.txt)", QString strTitle="Open File", QString strDefaultDirectory="");
    QString fnShowFileBrowser(QString FileNameFilter);
    int fnMsgBox(MsgType msgType, QString strMsg, QString strInformativeText);
    QString fnShowDirectoryBrowser();
    QString fnInputBox(QString strTitle, QString strMsg,QString strDefaultValue);
};

#endif // PRJMYGUILIBRARY_H
