#include <iostream>

using namespace std;

class cmydata
{
    private: int m_ndata = 0;
    public:
        int getdata()
        {
            return m_ndata;
        }
        void setdata(int nparam)
        {
            m_ndata = nparam;
        }
};
class cmydataex:public cmydata
{
    public:
        void setdata(int nparam)
        {
            if(nparam < 0)
                cmydata::setdata(0);
            else if(nparam > 10)
                     cmydata::setdata(10);
                else
                    cmydata::setdata(nparam);
        }
};
int main()
{
    cmydataex a;
    a.setdata(-10);
    cout << a.getdata() << endl;

    cmydataex b;
    b.setdata(15);
    cout << b.getdata() << endl;

    cmydataex c;
    c.setdata(5);
    cout << c.getdata() << endl;
}



/*
오버로딩 리턴형이 달라도 되고, 메소드명이 동일해야한다, 매개변수가 동일해야한다. 적용범위는 상속관계에서 정의(부모,아들) 결과론적으로 자식이 있는 함수를 호출해서 사용한다.
*/