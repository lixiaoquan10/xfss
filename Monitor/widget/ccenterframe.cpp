#include "cglobal.h"

CCenterFrame::CCenterFrame(QFrame *parent) :
    QSplitter(parent)
{
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
<<<<<<< HEAD

    createLeftBox();

    addWidget(m_leftBox);
=======
//    createLeftBox();

    CDesignTreeView* treeView = new CDesignTreeView(this);
    treeView->setFixedWidth(treeView->sizeHint().width());
    treeView->setStyleSheet("QTreeView {background-color: rgb(215, 220, 225);}");
    addWidget(treeView);
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
    setHandleWidth(1);
    addWidget(new CDesignSplashView());
}

CCenterFrame::~CCenterFrame()
{
    delete m_topLabel;
    delete m_leftBox;
    delete m_leftLayout;
    delete m_leftWidget;
    delete m_tabWidget;
}

void CCenterFrame::createLeftBox()
{
    qDebug() << "CCenterFrame::createLeftBox" << QDateTime::currentDateTime().toString("HH:mm:ss:zzz");
<<<<<<< HEAD
    QHBoxLayout *topLayout = new QHBoxLayout;
    m_topLabel = new QLabel;
    m_topLabel->setFixedHeight(30);
    m_topLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    m_topButton = createToolButton();
    m_topButton->setFixedHeight(30);
    m_topButton->setFixedWidth(30);
    m_topButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    m_topButton->setArrowType(Qt::LeftArrow);
    m_leftIsVisable = true;
    connect(m_topButton, SIGNAL(clicked(bool)),this,SLOT(slotToggleLeftBox()));

    topLayout->addWidget(m_topLabel);
    topLayout->addWidget(m_topButton);
=======
//    QHBoxLayout *topLayout = new QHBoxLayout;
//    m_topLabel = new QLabel;
//    m_topLabel->setFixedHeight(30);
//    m_topLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

//    m_topButton = createToolButton();
//    m_topButton->setFixedHeight(30);
//    m_topButton->setFixedWidth(30);
//    m_topButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
//    m_topButton->setArrowType(Qt::LeftArrow);
//    m_leftIsVisable = true;
//    connect(m_topButton, SIGNAL(clicked(bool)),this,SLOT(slotToggleLeftBox()));

//    topLayout->addWidget(m_topLabel);
//    topLayout->addWidget(m_topButton);
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c

    QVBoxLayout *layout = new QVBoxLayout;
    CDesignTreeView* treeView = new CDesignTreeView(this);
    treeView->setFixedWidth(treeView->sizeHint().width());
    treeView->setStyleSheet("QTreeView {background-color: rgb(215, 220, 225);}");
    layout->addWidget(treeView);

    m_leftBox  = new QGroupBox;
    m_leftBox->setFixedWidth(CGlobal::instance()->m_screenWidth * 0.25);
    m_leftBox->setMouseTracking(true);
    m_leftBox->setStyleSheet("QGroupBox {background-color: rgb(215, 220, 225);}");
    m_leftBox->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    m_leftBox->setLayout(layout);

//    m_leftWidget = new QWidget(this);
//    m_leftLayout = new QVBoxLayout;
//    m_leftLayout->addLayout(topLayout);
//    m_leftLayout->addWidget(m_leftBox);
//    m_leftWidget->setLayout(m_leftLayout);

}

void CCenterFrame::slotToggleLeftBox()
{
    qDebug() << "CCenterFrame::slotToggleLeftBox" << QDateTime::currentDateTime().toString("HH:mm:ss:zzz");
    if (m_leftIsVisable)    /*hide*/
    {
        m_leftBox->hide();
        m_leftIsVisable = false;
    }
    else
    {
        m_leftBox->show();
        m_leftIsVisable = true;
    }
}

QToolButton* CCenterFrame::createToolButton()
{
    qDebug() << "CCenterFrame::createToolButton" << QDateTime::currentDateTime().toString("HH:mm:ss:zzz");
    QToolButton *toolbutton = new QToolButton;
    toolbutton->setFixedSize(30,30);
    toolbutton->setArrowType(Qt::LeftArrow);
    return toolbutton;
}
