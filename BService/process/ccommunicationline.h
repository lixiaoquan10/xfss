#ifndef CCOMMUNICATIONLINE_H
#define CCOMMUNICATIONLINE_H

#include <QHash>
#include "packagetemplate.h"
#include "ccandatabytearray.h"

<<<<<<< HEAD
/*��·����*/
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
    CSerialPort* pSerialPort;//ͨѶ�ӿ�
    QHash<int/*commandtype*/, QList<QByteArray> > sendDataTableAsType;//����������Ϊkey�ķ��ͻ�����
    PackageTemplate sendPacketTemplate;//�������͵����ݰ�ģ�����
    QByteArray reciveData;//����������Ϣ�建����
    CCanDataByteArray canReciveData;//����can���ݷ������Ƶĸ���������
    int recentRespondSerialNumber;//���Ӧ����ˮ��
    int recentReceiveSerialNumber;//������յ��ķ��Ͱ���ˮ��
    int nPort;
};

struct Block/*��ʾ��ʼ�������Ŀ����*/
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
