#include <iostream>
using namespace std;

		void foot(float);

main(){
	float inches;
	cout<<"Enter measurement in inches: ";
	cin>>inches;
    		foot(inches); 
	}
		void foot(float inches){		
					
			float foot;
      			foot=inches/12;
 			cout<<"Equivalent in feet: "<<foot;			
			}