#include <iostream>

using namespace std;

class Address {};
class PhoneNumber {};

class Person {
    private:
        string name;
        Address address;
        PhoneNumber phNo;
};

int main()
{
    Person p;
    return 0;
}