#include <iostream>
using namespace std;
class Cube
{
public:
    int m_H;
    int m_L;
    int m_W;
    int mianji()
    {
        return m_H * m_W *2 + m_H * m_L * 2 + m_L * m_W * 2;
    };
    int tiji()
    {
        return m_H * m_L * m_W;
    };
    int getH()
    {
        return m_H;
    };
    int getL()
    {
        return m_L;
    };
    int getW()
    {
        return m_W;
    };
    bool issameChengyuan(Cube &c)
    {
        if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
        {
            return true;
        }
        else
        {
            return false;
        };
    };
};
bool isSame(Cube c1,Cube c2)
{
    if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL())
    {
        return true;
    }
    else
    {
        return false;
    };
};
int main()
{
    Cube c1;
    c1.m_H = 10;
    c1.m_L = 10;
    c1.m_W = 10;
    cout << c1.mianji() << endl;
    cout << c1.tiji() << endl;
    Cube c2;
    c2.m_H = 10;
    c2.m_L = 10;
    c2.m_W = 10;
    cout << isSame(c1,c2) << endl;
    system("pause");
    return 0;

}