#include <iostream>
using namespace std;
void option(float x);
main(){
while(true){
	int x;
	cout<<"Enter score: ";
	cin>>x;
	option(x);}
}
void option(float x){
	if(x<=50){
	cout<<"Fail"<<endl;
	}
 	else if(x>50 && x<=100){
	cout<<"Pass"<<endl;		
	}



}