#include "cglobal.h"


CDeviceModel::CDeviceModel(QObject *parent) :
    CModel(parent), m_loop(0)
{
    setTrack(true);
}

<<<<<<< HEAD
CDeviceModel::CDeviceModel(CLoop* loop, bool track, QObject *parent) :
    CModel(parent), m_loop(0)
{
    setTrack(track);
    setLoop(loop);
}
=======
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c

Qt::ItemFlags CDeviceModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;
<<<<<<< HEAD
    if(index.column() == DEVICE_COLUMN_ADDRESS || index.column() == DEVICE_COLUMN_LOGIN_TYPE)
        return CModel::flags(index);
=======
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
    return CModel::flags(index);
}

int CDeviceModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 8;
}

<<<<<<< HEAD
=======

>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
QVariant CDeviceModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(orientation == Qt::Horizontal && role == Qt::DisplayRole)
    {
        if(section == DEVICE_COLUMN_ADDRESS)
<<<<<<< HEAD
            return "配置地址";
        else if(section == DEVICE_COLUMN_LOGIN_ADDRESS)
            return "注册地址";
=======
            return "配址";
        else if(section == DEVICE_COLUMN_LOGIN_ADDRESS)
            return "注址";
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
        else if(section == DEVICE_COLUMN_TYPE)
            return "配置型号";
        else if(section == DEVICE_COLUMN_LOGIN_TYPE)
            return "注册型号";
        else if(section == DEVICE_COLUMN_PRODUCTID)
            return "产品编号";
        else if(section == DEVICE_COLUMN_VERSION)
            return "软件编号";
        else if(section == DEVICE_COLUMN_CONFIG_LOGIN)
            return "配/注";
        else if(section == DEVICE_COLUMN_STATUS)
            return "状态";
    }
    else if (role == Qt::FontRole && orientation == Qt::Horizontal)
    {
        QFont font;
        font.setPointSize(12);  // 设置字号为12
        return font;
    }
    return QVariant();
}

void CDeviceModel::setLoop(CLoop* loop)
{
    if(m_loop != loop || isupdate)
    {
        isupdate = false;
        clean();
        m_loop = loop;
        if(m_loop)
        {
            connectObject(m_loop);
            m_rootObject = m_loop;
<<<<<<< HEAD
//            addItem(m_loop, m_root);
=======
            addItem(m_loop, m_root);
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
            for(int i = 1; i <= m_loop->maxDeviceId(); i++)
            {
                CDevice* device = m_loop->deviceById(i);
                if(device)
                {
                    loadChildren(device);
                }
            }
        }
    }
}

<<<<<<< HEAD
=======

>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
void CDeviceModel::objectChanged(CObject::ObjectType type, CObject *object)
{
    if(object->type() != CDevice::type_s)
        return;
    if(type == CObject::OT_AddChildren)
    {
        appendObject(object, m_loop);
    }
    if(type == CObject::OT_RemoveChildren)
    {
        removeObject(object);
    }
}

void CDeviceModel::objectDestroy(CObject *object)
{
    if(object == m_loop)
    {
        m_loop = NULL;
        CModel::setRootObject(m_loop);
        return;
    }
    CModel::objectDestroy(object);
}

bool CDeviceModel::beforeLoadChildren(CObject *object, QModelIndex &parent)
{
    Q_UNUSED(parent);
    QString type = object->type();
    if(type != CDevice::type_s)
        return false;
    return true;
}

QVariant CDeviceModel::data(const QModelIndex &index, int role) const
{
    //DEVICE_VALUE_ISUSED  1:配且注  2:仅注册  0:仅配置 3:未定义
    //DISTRIBUTION_VALUE_NOLOGIN  LOOP_VALUE_NOLOGIN  DEVICE_VALUE_NOLOGIN  未注册
    CDevice* device = static_cast<CDevice*>(getObject(index));
    if(!device)
        return QVariant();
    CCanport* canport = CGlobal::instance()->controller()->canportByAddress(device->canportAdd());
    if(!canport)
        return QVariant();
    CDistribution* distribution = canport->distributionByAddress(device->distributionAdd());
    if(!distribution)
        return QVariant();
    CLoop* loop = distribution->loopByAdd(device->loopAdd());
    if(!loop)
        return QVariant();
    if(role== Qt::DisplayRole){
        //配置地址
<<<<<<< HEAD
        if(index.column() == DEVICE_COLUMN_ADDRESS){
            //仅配置或者配且注
//            if(device->deviceValue(DEVICE_VALUE_ISUSED) == 1 || device->deviceValue(DEVICE_VALUE_ISUSED) == 0)
=======
        if(index.column() == DEVICE_COLUMN_ADDRESS)
        {
            //仅配置或者配且注
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
            if(device->isDeviceConfig())
                return device->deviceValue(DEVICE_VALUE_ADDR);
        }
        //注册地址
        else if(index.column() == DEVICE_COLUMN_LOGIN_ADDRESS)
        {
            //仅注册或者配且注
<<<<<<< HEAD
//            if((device->deviceValue(DEVICE_VALUE_ISUSED) == 1 && loop->isLoopLogin()
//                && device->isDeviceLogin() && distribution->isDistributionLogin())
//                    || device->deviceValue(DEVICE_VALUE_ISUSED) == 2)
            if(loop->isLoopLogin() && device->isDeviceLogin() && distribution->isDistributionLogin())
                return device->deviceValue(DEVICE_VALUE_ADDR);
=======
            if(loop->isLoopLogin() && device->isDeviceLogin() && distribution->isDistributionLogin())
                return device->deviceValue(DEVICE_VALUE_LOGINADDR);
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
        }
        //配置型号
        else if(index.column() == DEVICE_COLUMN_TYPE)
        {
<<<<<<< HEAD
            //仅注册//未定义
            if(!device->isDeviceConfig())
                return CGlobal::instance()->deviceType(0)->name();
            CDeviceType* devType = CGlobal::instance()->deviceType(device->deviceValue(DEVICE_VALUE_TYPE_ID).toInt());
=======
            //未定义
            if(!device->isDeviceConfig())
                return CGlobal::instance()->deviceType(0)->name();
            //仅注册
            CDeviceType* devType = CGlobal::instance()->deviceType(device->deviceValue(DEVICE_VALUE_LOGINTYPE_ID).toInt());
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
            if(!devType)
                devType = CGlobal::instance()->deviceType(0);
            return devType->name();
        }
        //注册型号
        else if(index.column() == DEVICE_COLUMN_LOGIN_TYPE)
        {
            CDeviceType* devType = CGlobal::instance()->deviceType(0);
            if(loop->isLoopLogin() && device->isDeviceLogin() && distribution->isDistributionLogin())
<<<<<<< HEAD
            {
                devType = CGlobal::instance()->deviceType(device->deviceValue(DEVICE_VALUE_LOGINTYPE_ID).toInt());
            }
=======
                devType = CGlobal::instance()->deviceType(device->deviceValue(DEVICE_VALUE_LOGINTYPE_ID).toInt());
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
            if(!devType)
                devType = CGlobal::instance()->deviceType(0);
            return devType->name();
        }
        //产品编号
        else if(index.column() == DEVICE_COLUMN_PRODUCTID)
        {
            return device->deviceValue(DEVICE_VALUE_DESCRIPTION);
        }
        //软件编号
        else if(index.column() == DEVICE_COLUMN_VERSION)
        {
            if(device->deviceValue(DEVICE_VALUE_SOFTWARENUMBER).toString() != "" &&
                    device->deviceValue(DEVICE_VALUE_SOFTWAREVERSION).toString() != "")
            {
                return  device->deviceValue(DEVICE_VALUE_SOFTWARENUMBER).toString()
                    + "V" + device->deviceValue(DEVICE_VALUE_SOFTWAREVERSION).toString();
            }
        }
        //配置注册状态
        else if(index.column() == DEVICE_COLUMN_CONFIG_LOGIN)
        {
            if(loop->isLoopLogin() && device->isDeviceLogin() && distribution->isDistributionLogin())
            {
<<<<<<< HEAD
//                if(device->deviceValue(DEVICE_VALUE_ISUSED) == 1)
//                    return "配且注";
//                else if(device->deviceValue(DEVICE_VALUE_ISUSED) == 2)
//                    return "仅注册";
=======
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
                if(device->isDeviceConfig())
                    return "配且注";
                else
                    return "仅注册";
            }
            else
            {
<<<<<<< HEAD
//                if(device->deviceValue(DEVICE_VALUE_ISUSED) == 0)
//                    return "仅配置";
//                else if(device->deviceValue(DEVICE_VALUE_ISUSED) == 3)
//                    return "未定义";
=======
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
                if(device->isDeviceConfig())
                    return "仅配置";
                else
                    return "未定义";
            }
            return "未定义";
        }
        //灯具状态
        else if(index.column() == DEVICE_COLUMN_STATUS)
        {
            //非故障的灯具
<<<<<<< HEAD
            if(device->getDeviceCommunicationFault() == false)
=======
            if(!device->getDeviceCommunicationFault())
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
            {
                if(distribution->getemergencyStatus() || device->deviceValue(DEVICE_VALUE_EMERGENCY) == "应急")
                    return "应急";
                else if(device->deviceValue(DEVICE_VALUE_TEST) == "测试")
                    return "测试";
                else if(device->deviceValue(DEVICE_VALUE_LIGHT) == "光源故障")
                    return "光源故障";
                else
                    return "正常";
            }
            else
                return "通讯故障";
        }
    }
    if(role == Qt::BackgroundColorRole){
        //灯具状态
        if(index.column() == DEVICE_COLUMN_STATUS)
        {
            if(device->getStatus(OBJS_LightFault) == 1 || device->getDeviceCommunicationFault())
                return QColor(245,222,179); //黄色
            else if(device->deviceValue(DEVICE_VALUE_EMERGENCY) == "应急" ||
                    device->deviceValue(DEVICE_VALUE_TEST) == "测试" || distribution->getemergencyStatus())
                return QColor(255,99,71);  //红色
            else
                return QColor(127,255,0);   //绿色
        }
        //灯具修改型号
        if(device->deviceValue(DEVICE_VALUE_CHANGETYPE) == 1)
        {
            if(index.column() == DEVICE_COLUMN_LOGIN_TYPE || index.column() == DEVICE_COLUMN_TYPE)
                return QColor(227,168,105);   //瓜色
        }
        //灯具修改地址
        if(device->deviceValue(DEVICE_VALUE_CHANGEADD) == 1)
        {
            if(index.column() == DEVICE_COLUMN_ADDRESS || index.column() == DEVICE_COLUMN_LOGIN_ADDRESS)
                return QColor(227,168,105);  //瓜色
        }
    }
    if(role == Qt::TextColorRole){
        //非故障的灯具
<<<<<<< HEAD
        if(device->getDeviceCommunicationFault() == false)
        {
            return QColor(0,0,0);
        }
        else
        {
            return QColor(128,138,135);    //灰色
        }
=======
        if(!device->getDeviceCommunicationFault())
            return QColor(0,0,0);
        else
            return QColor(128,138,135);    //灰色
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
    }
    if(role == Qt::TextAlignmentRole){
        if(index.column() == DEVICE_COLUMN_ADDRESS ||
           index.column() == DEVICE_COLUMN_LOGIN_ADDRESS ||
           index.column() == DEVICE_COLUMN_CONFIG_LOGIN ||
           index.column() == DEVICE_COLUMN_VERSION ||
           index.column() == DEVICE_COLUMN_STATUS)
        {
            return Qt::AlignCenter;
        }
    }
    return QVariant();
}


