#include <iostream>
#include <string.h>
using namespace std;

class sb_coffee
{
    int size;
    int type;
    
    public:
        sb_coffee()
        {
            size = 1;
            type = 1;
        }
        void getsize(int c_size)
        {
            size = c_size;
        }
        void gettype(int c_type)
        {
            type = c_type;
        }
        void print()
        {
            string r_size;
            string r_type;

            switch(size)
            {
            case 1:
                r_size = "tall";
                break;
            case 2:
                r_size = "grande";
                break;
            case 3:
                r_size = "venti";
                break;
            };
            switch(type)
            {
            case 1:
                r_type = "Hot";
                break;
            case 2:
                r_type = "Ice";
                break;
            };
            cout << "Select Size : " << r_size << endl;
            cout << "Select Type : " << r_type << endl;
        }
};
class sub_menu: public sb_coffee
{
    int menu;
    bool milk;
    bool cream;
    bool syrup;

    public:
        sub_menu()
        {
            cout << "choice Menu" << endl;
            cout << "1. Nitro Vanilla Cream" << endl;
            cout << "2. Espresso Con Panna" << endl;
            cout << "3. Caramel Macchiato" << endl;
            cin >> menu;
            cout << endl;
        }
        void order_menu()
        {
            string r_menu;
            int op1;
            string d_menu;
            string d1_menu;
            switch (menu)
            {
            case 1:
                r_menu = "Nitro Vanilla Cream";
                cout << "milk on(1)/off(0)" << endl;
                cin >> op1;
                d_menu = "milk";
                break;
            case 2:
                r_menu = "Espresso Con Panna";
                cout << "cream on(1)/off(0)" << endl;
                cin >> op1;
                d_menu = "cream";
                break;    
            case 3:
                r_menu = "Caramel Macchiato";
                cout << "syrup on(1)/off(0)" << endl;
                cin >> op1;
                d_menu = "syrup";
                break;
            };

            if(op1==1)
                d1_menu = "on";
            else
                d1_menu = "off";

            cout << "Select Menu" << r_menu << endl;
            cout << "Select detail_menu" << d_menu << " " << d1_menu << endl;
        }
};
int main()
{
    int m_size, m_type;
    sub_menu ex1;
    cout << "sb_coffee Shop" << endl;

    cout << "choice size: " << endl;
    cout << "1. tall" << endl << "2. grande" << endl << "3. venti" << endl;
    cin >> m_size;
    ex1.getsize(m_size);

    cout << "choice type :" << endl;
    cout << "1. Hot" << endl << "2. Ice" << endl;
    cin >> m_type;
    ex1.gettype(m_type);

    ex1.order_menu();
    ex1.print();
}