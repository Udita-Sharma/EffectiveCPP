#include<iostream>
using namespace std;

template<typename T>
T square(T x) {
	return x * x;
}

template<typename T>
class commonVector {
private:
	T arr[10];
	int size;
public:
	commonVector() :size(0) {}
	
};

int main() {
	cout << square(5) << endl;
	cout << square(5.5) << endl;
	return 0;
}
