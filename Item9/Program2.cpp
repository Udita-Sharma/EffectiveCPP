#include<iostream>
#include<stdlib.h>
using namespace std;

class Transaction    // base class
{				
	public:									
		Transaction(const string& LogInfo);
		void logTransaction(const string& LogInfo);	

};
Transaction::Transaction(const string& LogInfo)	// implementation of ctor
{ 
	cout<<endl<<"base class ctor";
	logTransaction(LogInfo);	// as final action, log this transaction
	cout<<endl<<LogInfo;		//coming from derived class
} 

void Transaction::logTransaction(const string& LogInfo)
{
	cout<<endl<<"Base logTransaction";
}

class BuyTransaction: public Transaction { // derived class
	public:
		BuyTransaction(int parameter):Transaction(createLogString(parameter))
		{}
	private:
		static string createLogString( int parameter )
		{
			return "Hello";
		}


};

int main()
{
	BuyTransaction bt(1);
	return 0;
}