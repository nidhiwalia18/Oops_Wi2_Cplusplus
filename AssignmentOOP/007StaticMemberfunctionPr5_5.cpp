//program to show the use of static member function showcount in a class
#include <iostream>
using namespace std;
class abc
{
private:
 static int showcount; //static member function
public:
	abc()
	{
		showcount++;
	}
	void display()
	{
		cout<<"the number of objects created = "<<showcount;
	}
	
};
int abc :: showcount = 0;
int main()
{
	abc c1,c2,c3,c4,c5;
	c1.display();
}
