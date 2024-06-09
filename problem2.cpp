#include<iostream>
using namespace std;
class Rectangle{
private:
double l,w ;
public:
double area()
{
 return l*w;
}
double perimeter()
{
    return 2*(l+w);
}
Rectangle()
{
    cout<<"Enter length and width:";
    cin>>l>>w;
}

};
int main()
{
    Rectangle obj;
    cout<<"Area of Rectangle:"<<obj.area()<<endl;
    cout<<"Area of perimetaqr:"<<obj.perimeter()<<endl;

}