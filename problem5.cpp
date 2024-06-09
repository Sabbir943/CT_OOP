#include<iostream>
using namespace std;
class Triangle{
    private:
    double side1,side2,side3;
    public:
    double display()
    {
        if(side1==side2&&side1==side3)
        {
            cout<<"Equilateral!"<<endl;
        }
        else if(side1==side2&&side1==side3&&side2==side3)
        {
            cout<<"Isosceles!"<<endl;
        }
        else
        {
            cout<<"Scalene!"<<endl;
        }

    }
    Triangle()
    {
        cout<<"Enter Three sides:";
        cin>>side1>>side2>>side3;
    }
};
int main()
{
    Triangle obj;
    obj.display();
    return 0;
}