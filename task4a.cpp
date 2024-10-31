#include <iostream>
using namespace std;
void mul(int x, int y);
main(){
	int x;
	int y;
 	char op;
	cout<<"Enter value of x: ";
	cin>>x;

 	cout<<"Enter value of y: ";
	cin>>y;

	cout<<"Enter the operator type: ";
	cin>>op;
	if(op=='*'){
		    mul(x,y);
		 }	
	
		}
		
		void mul(int x, int y){
					int mul;
					mul=x*y;
					cout<<"Multiplication of x and y comes out to be :"<<mul;
						
						}