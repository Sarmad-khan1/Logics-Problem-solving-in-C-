#include <iostream>
using namespace std;
void province(string pname);
int main()
{
	system("cls");
	string pname;
	cout<<"Enter province name: ";
	cin>>pname;
	
	province(pname);
}
void province(string pname)
{
	if(pname == "sindh")
	{
	cout<<"Great you live in sindh";
		}
	else
	{
				cout<<"You should come visit sindh sometime!";

	}
}
