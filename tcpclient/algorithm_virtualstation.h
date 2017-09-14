#ifndef ALGORITHM_VIRTUALSTATION_H
#define ALGORITHM_VIRTUALSTATION_H
/*class createvirtualstation
{
public:
   void Creat_virtualstation(float *estimate_distance);//根据估计距离产生虚拟基站的位置
   ~Creat_virtualstation();//一个类只有一个析构函数，程序结束产生析构，释放内存
};*/

class createvirtualstation
{
public:
    createvirtualstation(float *estimate_distance);//根据估计距离产生虚拟基站的位置
    ~createvirtualstation();//一个类只有一个析构函数，程序结束产生析构，释放内存
}
class creatcoordinatesystem
{
public:
    creatcoordinatesystem();
    ~creatcoordinatesystem();
}

#endif // ALGORITHM_VIRTUALSTATION_H
