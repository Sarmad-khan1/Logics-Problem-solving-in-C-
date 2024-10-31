#include <iostream>
using namespace std;


void score( string name, int x); // function decelaration
main(){
	int marks;
	cout<<"Enter marks: ";
	cin>>marks;
	string name;
	cout<<"Enter name of student ";
	cin>>name;
	if(marks !=0){
		score(name, marks);	//function call
	}
	
}


void score( string name, int x){   //function defination
				
	if( x>= 50){
	cout<<"Pass" << name;
	}
	
	if(x<50){
	cout<<"Fail "<<name;
	}
}

	
			