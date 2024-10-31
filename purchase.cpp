#include <iostream>
using namespace std;
void discount(int purchase, string day);
main(){	
	int purchase;
	cout<<"Enter Purchase Amount: ";
	cin>>purchase;
	
	string day;
	cout<<"Enter Shopping Day: ";
	cin>>day;
	

	discount(purchase, day);
	
	}

void discount(int purchase, string day){
					
  if(day==sunday){
	float total;
	total=0.1*purchase;
	cout<<"10% discount on sunday shopping purchase comes out to be: "<<total;
	}
					}
	