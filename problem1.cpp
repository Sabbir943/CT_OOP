#include<iostream>
using namespace std;
class Circle{
private:
double radious ;
public:
double circle()
{
 return 3.1416*radious*radious;
}
double circum()
{
    return 2*3.1416*radious;
}
Circle()
{
    cin>>radious;
}

};
int main()
{
    Circle obj;
    cout<<"Area of circle:"<<obj.circle()<<endl;
    cout<<"Area of circum:"<<obj.circum()<<endl;

}