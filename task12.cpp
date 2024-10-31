#include <iostream>
using namespace std;
void discount(float x, string y);
main(){
while(true){
	float x;
	cout<<"Enter Purchase Amount: ";
	cin>>x;

	string y;
	cout<<"Enter Shopping Day: ";
	cin>>y;

	discount(x, y);
	}
}
void discount(float x, string y){
	float paysun;
	paysun=0.1*x;

	float finalamount;
	finalamount=x-paysun;

	if(y=="sunday"){
	cout<<"Payable Amount with 10% on"<<y<<" Shopping comes out to be: "<<finalamount<<endl;
	}
	
	float payment;
	payment=0.05*x;

	float totalpay;
	totalpay=x-payment;

	if(y=="monday" || y=="tuesday" || y=="wednesday" || y=="thursday" || y=="friday" || y=="saturday"){
		cout<<"Payable Amount with 5% discount on "<<y<<" shopping day comes out to be: "<<totalpay<<endl;
		
	}


}