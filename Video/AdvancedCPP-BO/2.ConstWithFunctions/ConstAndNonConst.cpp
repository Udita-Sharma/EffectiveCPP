#include <iostream>
#include<string.h>

using namespace std;

class Dog
{
    int age;
    string name;
    
    public:
    
    Dog():age(0),name("Dummy"){}
    
    void setAge(const int& a)
    {
        age = a;
        cout<<"const called"<<endl;
    }
    
    void setAge(int& a)
    {
        age = a;
        cout<<"non-const called"<<endl;
    }
    
    void printDog()
    {
        cout<<name<<"   "<<age<<endl;
    }
    
    
    
};

int main()
{
    Dog d;
    
    int i=5;
    d.setAge(i);
    d.printDog();
    
    const int j=10;
    d.setAge(j);
    d.printDog();
    return 0;
    
}
/* Output:
non-const called
Dummy   5
const called
Dummy   10*/
