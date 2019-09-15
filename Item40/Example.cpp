#include <iostream>

using namespace std;

class A {
    public:
        A(int x): a(x){} // D class calls paramaterized ctor of A
        A(){} // B and C class always call default ctor of A
    private:
        int a;
};

class B : public virtual A {
    public:
        B(int x):b(x) {}
    private:
        int b;
};

class C : public virtual A {
     public:
        C(int x):c(x) {}
    private:
        int c;
};

class D: public B, public C {
    public:
        D(int x_a, int x_b, int x_c, int x_d) : A(x_a), B(x_b), C(x_c), d(x_d) {}
		//Only D class has power to initialize A's data member since we are using virtual inheritance
        
    private:
        int d;
};
int main()
{
    D derived(1,2,3,4);
    cout<<"Hello";
    return 0;
}