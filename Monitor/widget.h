#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QHash>
class CLayer;
class CDevice;
class GroupBox;
class QTabWidget;
class QTableView;
class Widget : public QWidget
{
    Q_OBJECT
    
public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    void switchLayer();
    void createTimer();// Create timer
    void keyPressEvent(QKeyEvent  *event);
    int  normalSwitch(QList<CLayer*> &listLayer, int num);

protected:
    void closeEvent(QCloseEvent *e);

public slots:
    void slotLEDTimer();
    void slotEventChange();

private:
<<<<<<< HEAD
    int     m_iDelayCut;

    QTimer  *m_timerLED;
    GroupBox *topBox;
    QGridLayout *topLayout;
    GroupBox *bottomBox;
    QGridLayout *bottomLayout;
=======
    int m_iDelayCut;
    QTimer  *m_timerLED;
    QDialog *topBox;
    QHBoxLayout *topLayout;
    QDialog *bottomBox;
    QHBoxLayout *bottomLayout;
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c

};

#endif // WIDGET_H
