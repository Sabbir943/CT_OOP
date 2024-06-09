#include<iostream>
using namespace std;
class Person{
private:
string name;
int age;
string country;
public:
Person()
{
    cout<<"Enter person name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter country:";
    cin>>country;
}
void display()
{
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"country:"<<country<<endl;
}

};
int main()
{
    Person obj;
    obj.display();
    return 0;

}