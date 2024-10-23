#ifndef CPROGRAMVIEW_H
#define CPROGRAMVIEW_H

#include <QWidget>
#include <QTimer>
#include <QVBoxLayout>
<<<<<<< HEAD

class CMiniSplitter;
class QToolButton;
=======
#include <QLabel>

class CMiniSplitter;
class QToolButton;
class CMsgObjectStatus;
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c

class CProgramView : public QWidget
{
    Q_OBJECT
public:
    explicit CProgramView(QWidget *parent = 0);
    virtual ~CProgramView();
    void Sleep(int msec);
signals:
    void sigRegAllInfo();
    void sigRegLoopInfo();
public slots:
    void slot_regALL();
    void slot_regLoop();
    void slot_unLogin();
    void slot_unLoginLoop();
    void slot_recodeAllDevice();
    void slot_recodeLoopDevice();
    void slot_saveAllDevice();
    void slot_saveLoopDevice();
    void slot_removeLoginObject();
    void slot_resetControllerView();
<<<<<<< HEAD
=======
    void slot_DelayReAddress();
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
private:
    CMiniSplitter* m_pSplitter;
    QToolButton* m_regAll;
    QToolButton* m_clrAllReg;
    QToolButton* m_regOne;
    QToolButton* m_clrOneReg;
    QToolButton* m_readdressAll;
    QToolButton* m_readdress;
    QToolButton* m_storeAll;
    QToolButton* m_store;
    bool m_isRemoveLoop;

    QTimer* m_timerReset;
<<<<<<< HEAD
=======

    QTimer* m_reAddressTimer;
    int m_count;
    QList<CMsgObjectStatus*> m_reAddressMsg;
    bool isReAddressing;
public:
    QLabel* m_msg;
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
};


#endif // CPROGRAMVIEW_H
