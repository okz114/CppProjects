// Hello World App
// By Omar Bahgat
#include <iostream>
using namespace std;

void askFavFood()
{
	string favFood;

	cout << "Please enter your favourite food!" << endl;
	cin >> favFood;
	cout << "seriously! your favourite food is " << favFood << "!" << endl;
}

void sayHello()
{
	string name;
	cout << "Please enter your name" << endl;
	cin >> name;
	cout << "Hello!, " << name << endl;
}

int main()
{
	 askFavFood ();
}

