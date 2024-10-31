	#include <iostream>
	using namespace std;
	void selector(float x);
	main(){
while(true){
	float x;
	cout<<"Enter Your Age: ";
	cin>>x;
	selector(x);}

		}
	void selector(float x){
				if(x<=18){
				cout<<"You are not Eligible to vote"<<endl;	
				}

				else if(x>18){
				cout<<"	You are Eligible to vote"<<endl;	
					}







}