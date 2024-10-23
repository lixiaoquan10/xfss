#ifndef DISP_INPUT_H
#define DISP_INPUT_H

#include <QObject>
#include <QWidget>
#include "ckeyboard.h"

<<<<<<< HEAD
class CKBContext : public QWidget
{
    Q_OBJECT
public:
    CKBContext();
    ~CKBContext();
    bool filterEvent(const QEvent *event);
=======
class CKBContext : public QObject
{
    Q_OBJECT
public:
    CKBContext(QWidget *parent = NULL);
    bool eventFilter(QObject *obj, QEvent *event);
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
    QString identifierName();
    QString language();

    bool isComposing() const;
    void reset();

private slots:
    void sendCharacter(quint32 character);

private:
    CKeyboard *disp_inputkey;
    void updatePosition();
};



#endif // DISP_INPUT_H

