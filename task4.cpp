#include <iostream>
using namespace std;
void add(int num1, int num2);
main(){
	int num1;
	int num2;
	char op;
	cout<<"Enter num1: ";
	cin>>num1;

	cout<<"Enter num2: ";
	cin>>num2;

  	cout<<"Enter operator: ";
	cin>>op;

   if(op=='+'){
		add(num1, num2);
		 }


	
         }

	void add(int num1, int num2){
				int add;
				add=num1+num2;
			   cout<<"Sum: "<<add;	
				
			}