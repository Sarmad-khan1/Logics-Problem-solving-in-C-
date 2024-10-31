#include <iostream>
using namespace std;
void day(int x, string y);
main(){
while(true){
	int x;
	cout<<"Enter the day purchase: ";
	cin>>x;
	string y;
	cout<<"Enter Shopping Day: ";
	cin>>y;
	
	day(x, y);
	}
}

void day(int x, string y){
	float z;
	z=x*(0.1);

	float paybale;
	payable=x-z;

	if(y=="sunday"){
	cout<<"Payable Amount: "<<payable<<endl;
	}
	else if(y=="monday" || y=="tuesday" || y=="wednesday" || y=="thursday" || y=="friday" || y=="saturday"){
	
		cout<<"Payble Amount: "<<x<<endl;


				}
	

}