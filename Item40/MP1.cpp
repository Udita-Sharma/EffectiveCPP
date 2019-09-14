#include <iostream>

using namespace std;

class BorrowableItem {
    public:
        void checkOut();
};

class ElectronicGadget {
    private:
        bool checkOut() const;
};

class MP3Player : public BorrowableItem, public ElectronicGadget {};

int main()
{
    MP3Player mp;
    //mp.checkOut(); //main.cpp:28:8: error: request for member ‘checkOut’ is ambiguous
    mp.BorrowableItem::checkOut();
    return 0;
}