#include <iostream>
using namespace std;
void mul(int, int);
void add(int, int);
main(){
	int x;
	int y;
	char op;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Enter value of y: ";
	cin>>y;
	cout<<"Enter your operator(+ or *) ";
	cin>>op;
	if (op=='+'){
		add(x,y);
		}
	if(op=='*'){
		mul(x,y);
		}
}

void add(int x, int y){
			int sum;
			sum=x+y;
			cout<<"Addition of your input numbers is: "<<sum;
		}
void mul(int x, int y	){
			int product;
			product=x*y;
			cout<<"The product of your input numbers is: "<<product;	
		}