	#include<iostream>
	using namespace std;

	void fuel(float);

	mian(){
		float distance;
		cout<<"Enter the distance: ";
		cin>>distance;

                fuel(distance);

		}
         
              void fuel(float distance){
					  float fuel;
                                          fuel=distance*10;
					cout<<"Fuel Needed to cover distance:  "<<fuel;
						
						}