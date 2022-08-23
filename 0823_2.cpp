#include <iostream>

using namespace std;

class cmydata
{
    private:
        int m_ndata = 0;
    public:
        cmydata()
        {
            cout << "cmydata()" << endl;
        }
            int getdata()
            {
                return m_ndata;
            }
            void setdata(int nparam)
            {
                m_ndata = nparam;
            }
        protected:
            void printdata()
            {
                cout << "cmydata :: printdata()" << endl;
            }
};
class cmydataex:public cmydata
{
    public:
        cmydataex()
        {
            cout << "cmydataex()" << endl;
        }
        void testfunc()
        {
            printdata();
            setdata(5);
            cout << cmydata :: getdata() << endl;
        }
};

int main()
{
    cmydataex data;
    data.setdata(10);
    cout << data.getdata() << endl;

    data.testfunc();

    return 0;
}