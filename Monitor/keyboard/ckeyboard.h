#ifndef DISP_INPUTKEY_H
#define DISP_INPUTKEY_H

#include <QDialog>
#include <QSignalMapper>
#include <QLineEdit>
#include <QToolButton>

#define CANDIDATEWORDNUM 6

namespace Ui {
class CKeyboard;
}

class CKeyboard : public QDialog
{
    Q_OBJECT

public:
    explicit CKeyboard(QWidget *parent = 0);
    ~CKeyboard();
    QWidget *getFocusedWidget();

signals:
    void characterGenerated(quint32 character);

protected:
    bool event(QEvent *);

private slots:
    void on_pushButton_close_clicked();
<<<<<<< HEAD
    void buttonClicked(QWidget *w);
public slots:
    void saveFocusWidget(QWidget *oldFocus, QWidget *newFocus);
=======
    void saveFocusWidget(QWidget *oldFocus, QWidget *newFocus);
    void buttonClicked(QWidget *w);
>>>>>>> 957eba89c7497495d1e87ace91ff9780e6d4a2eb

private:
    Ui::CKeyboard *ui;
    QWidget *lastFocusWidget;
    QSignalMapper signalMapper;
    void PushButton_Init();

};

#endif // DISP_INPUTKEY_H
