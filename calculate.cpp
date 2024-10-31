#include <iostream>
using namespace std;
void sum(int x, int y);
void subtract(int x, int y);
void multiplication(int x, int y);
void division(int x, int y);
main()
  {		
	char op;
	int x;
	int y;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
		
	cout<<"Enter operator: ";
	cin>>op;

	if(op== '+'){
	sum(x, y);
	}	
	if (op== '-'){
	subtract(x, y);
	}
	if(op== '*'){
	multiplication(x, y);
	}
	if(op== '/'){
	division(x, y);
	}		
  }

	void sum(int x, int y){
	int s;
	s=x+y;
	cout<<"Sum is: "<<s;
	}	
	
 	void subtract(int x, int y){
	int min;
	min=x-y;
	cout<<"Minus is: "<<min;
	}

	void multiplication(int x, int y){
	int mul;
	mul=x*y;
	cout<<"Multipication is: "<<mul;
	}

	void division(int x, int y){
	int div;
	div=x/y;
	cout<<"Division is: "<<div;	
	}