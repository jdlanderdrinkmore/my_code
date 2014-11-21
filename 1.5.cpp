#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string name;
	cout<<"What's your name?\n";
	cin>>name;
	if (name.size() >= 2)
		cout<<"Hello "<<name<<endl;
	else 
		cout<<"Invalid name!\n";
	/* code */
	return 0;
}