#include <iostream>
using namespace std;
void vote(string name, int age);
main(){

	cout<<"Enter your name"<<endl;
	string name;
	cin>>name;

	cout<<"Enter your age "<<endl;
	int age;
	cin>>age;

	vote(name, age);

}


void vote(string name, int age){


	if(age >= 18){
		cout<<name<<" is eligible for vote";
	}
	if(age < 18){
		cout<<name <<" is not eligible for the vote";
	}
}