#include<iostream>
using namespace std;

inline void f() {}

void(*pf)() = f;

f(); // this function call will be inline

pf(); //this function call might not be inline since its a function pointer