#include <iostream>
using namespace std;
void number(int x);
main(){
	int x;
	cout<<"Enter number: ";
	cin>>x;

	number(x);
}
void number(int x){
	if(x%2==0){
		cout<<"Even";
		}
	if(x%2==1){
		cout<<"Odd";
		}
}