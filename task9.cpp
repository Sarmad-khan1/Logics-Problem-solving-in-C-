#include <iostream>
using namespace std;
void fuel(float x);
main(){
	float x;
	cout<<"Enter the distance: ";
	cin>>x;
	
	fuel(x);	
}
void fuel(float x){
		
		float z=100;

		float y;
		y=10*x;
		if(y<=100){
		cout<<"Fuel Needed: "<<z;	
			}
		if(y>100){
		cout<<"Fuel Needed: "<<y;
		}
	
	
		
}