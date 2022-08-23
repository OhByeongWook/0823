#include <iostream>

using namespace std;

class cmydata
{
    public:
        cmydata()
        {
        cout << "cmydata()" << endl;
        }
        cmydata(int nparam)
        {
            cout << "cmydata(int)" << endl;
        }
        cmydata(double dparam)
        {
            cout << "cmydata(double)" << endl;
        }
 };

class cmydataex : public cmydata
{
    public:
        cmydataex()
        {
            cout <<"cmydataex()" << endl;
        }
        cmydataex(int nparam) : cmydata(nparam)
        {
            cout << "cmydataex(int)" << endl;
        }
        cmydataex(double dparam):cmydata()
        {
            cout << "cmydataex(double)" << endl;
        }
};
int main()
{
    cmydataex a;
    cout << "**********" << endl;
    cmydataex b(5);
    cout << "**********" << endl;
    cmydataex c(3.3);

    return 0;
}