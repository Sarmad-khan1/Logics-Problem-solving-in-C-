#include<iostream>

using namespace std;

void name();
main(){
	int temp = 0;
	while(temp  < 100){
		cout<<temp + 1;
		name();
		temp  = temp + 1;
		cout<<endl;
	}   

    
}
 void name(){
	cout<<" Sarmad ";
	}