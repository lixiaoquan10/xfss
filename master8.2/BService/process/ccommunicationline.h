#ifndef CCOMMUNICATIONLINE_H
#define CCOMMUNICATIONLINE_H

#include <QHash>
#include "packagetemplate.h"
#include "ccandatabytearray.h"

<<<<<<< HEAD
/*线路对象*/
=======
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
class CSerialPort;
class CCommunicationLine
{
public:
    CCommunicationLine();
    void destroy();

public:
<<<<<<< HEAD
    CSerialPort* pSerialPort;//通讯接口
    QHash<int/*commandtype*/, QList<QByteArray> > sendDataTableAsType;//以命令类型为key的发送缓存区
    PackageTemplate sendPacketTemplate;//辅助发送的数据包模板对象
    QByteArray reciveData;//接收数据信息体缓存区
    CCanDataByteArray canReciveData;//管理can数据分析机制的辅助缓存区
    int recentRespondSerialNumber;//最近应答流水号
    int recentReceiveSerialNumber;//最近接收到的发送包流水号
    int nPort;
};

struct Block/*表示开始到结束的块对象*/
=======
    CSerialPort* pSerialPort;
    QHash<int, QList<QByteArray> > sendDataTableAsType;
    PackageTemplate sendPacketTemplate;
    QByteArray reciveData;
    int recentRespondSerialNumber;
    int recentReceiveSerialNumber;
    int nPort;
};

struct Block
>>>>>>> 341c9929318cff5b207944113ce95e985e86616c
{
    int start;
    int end;
    void clear(){start=-1;end=-1;}
    Block():start(-1),end(-1){}
};

#endif // CCOMMUNICATIONLINE_H
