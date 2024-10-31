	#include <iostream>
	using namespace std;
	void stickers(int);
	main(){		
		int length;
 		cout<<"Enter length of a cube: ";
		cin>>length;
		stickers(length);	
		
		}
		void stickers(int length){
		                     	   int stickers;
                                           stickers=(length*length)*6;
					   cout<<"Number of stickers needed: "<<stickers;
					  
					}