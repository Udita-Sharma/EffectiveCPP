#include<iostream>
using namespace std;

class Transaction    // base class
{				
	public:									
		Transaction();
		virtual void logTransaction() = 0;	

};
Transaction::Transaction()	// implementation of ctor
{ 
	cout<<endl<<"base class ctor";
	logTransaction();	// as final action, log this transaction
} 

void Transaction::logTransaction()
{
	cout<<endl<<"Base logTransaction";
}

class BuyTransaction: public Transaction { // derived class
	public:
	virtual void logTransaction()
	{
		cout<<endl<<"custom logTransaction";
	}

};

int main()
{
	BuyTransaction bt;
	return 0;
}
/*Ouout
base class ctor
Base logTransaction  //even though custom object is created
*/