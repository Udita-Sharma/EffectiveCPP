/*Problem Statement is : If new Image throws an error, then refer line 46, 1. Resources will be leaked
referline 47, 2. Data will be corrupted
*/

#include"iostream"
using namespace std;

class Image
{
public:
	Image(char x) :img(x)
	{}
private:
	char img;
};
class PrettyMenu {

public:

	void changeBackground(char imgSrc); // change background image
	PrettyMenu() :imageChanges(0)
	{}


private:

	//Mutex mutex; // mutex for this object

	Image *bgImage; // current background image

	int imageChanges; // # of times image has been changed

};


void PrettyMenu::changeBackground(char imgSrc)

{

	//lock(&mutex); // acquire mutex (as in Item 14)

	delete bgImage; // get rid of old background

	++imageChanges; // update image change count

	bgImage = new Image(imgSrc); //install new background, what if it fails? 1. the unlock mutex will never be called
	//Also 2. bgImage will point to nothing that is data is corrupted

	//unlock(&mutex); // release mutex

}


int main()
{
	PrettyMenu *pm;
	pm->changeBackground('A');

	return 0;
}