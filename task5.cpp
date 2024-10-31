#include <iostream>
using namespace std;
void addition(float x, float y);
void subtraction(float x, float y);
void multiplication(float x, float y);
void division(float x, float y);
main(){
	float x;
	float y;
	char op;
 	cout<<"Enter value of x: ";
	cin>>x;

	cout<<"Enter value of y: ";
	cin>>y;

	cout<<"Enter operator(+ - * /): ";
	cin>>op;
  	
	if(op=='+'){
 		addition(x, y);		
		}
	if(op=='-'){
		subtraction(x, y);
		}
	if(op=='*'){
		multiplication(x, y);
		}
	if(op=='/'){
		division(x, y);
		}
     }

void addition(float x, float y){
  		float addition;
		 addition=x+y;
  		cout<<"Sum of x & y comes out to be: "<<addition;
		}
void subtraction(float x, float y){
			float subtraction;
			subtraction=x-y;
			cout<<"Subtraction of x & y gives a value of : "<<subtraction;
			}
void multiplication(float x, float y){
 			float multiplication;
			multiplication=x*y;
			cout<<"Multiplication of x & y comes out to be: "<<multiplication;	
				}
void division(float x, float y){
			float division;
			division=x/y;
			cout<<"Division of x & y comes out to be: "<<division;
				}