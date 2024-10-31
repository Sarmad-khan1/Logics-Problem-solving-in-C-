#include <iostream>
using namespace std;
void printName(string name);
main(){
	string name;
	cout<<"enter name: ";
	cin>>name;

while(true){
	printName(name);
	}
}	
void printName(string name){
	cout<<name<<endl;
	}