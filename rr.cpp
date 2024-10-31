#include <iostream>
using namespace std;
void score(int x);
main(){

int x;
cout<<"enter marks: ";
cin>>x;
score(x);
}

void score(int x){
if(x>=45){
cout<<"You have passed this course"<<endl;
}

if(x<45){
cout<<"You have failed this course"<<endl;
}
}