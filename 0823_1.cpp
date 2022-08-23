#include <iostream>

using namespace std;

class car
{
    public:

        int speed;
        int gear;
        string color;
    
        void setgear(int newgear)
        {
            gear = newgear;
        }
        void speedup(int increment)
        {
            speed = speed + increment;
        }
        void speeddown(int decrement)
        {
            speed = speed - decrement;
        }
};
class supercar : public car
{
    bool turbo;
    public:
        void setturbo(bool newvalue)
        {
            turbo = newvalue;
        }
        void printturbo()
        {
            string result;
            if(turbo == true)
                result = "On";
            else
                result = "Off";
            cout << "turbo = " << result << endl;
        }
        void print()
        {
            cout << "speed = " << speed << endl;
            cout << "gear = " << gear << endl;
            cout << "color = " << color << endl;
        }
};
int main()
{
    supercar c;
    cout << "supercar specification" << endl;
    c.color = "red" ;
    c.setgear (3);
    c.speedup (100);
    c.speeddown (30);
    c.setturbo (true);

    c.print();
    c.printturbo();  
}

/*부모클래스 : 기초클래스, 상위클래스
자식클래스 : 파생클래스, 하위클래스

클래스 상속 장점 
1. 부모클래스에 있는 멤버변수, 멤버함수를 그대로 자식클래스에서 사용할 수 있다.
2. 중복 코드 발생이 줄어든다. 
*/