	#include<iostream>
	using namespace std;

	        void cash(float, float);

		void discount(float);

	main()	{
			
			float x;
			float y;

			cout<<"Enter price of a kilogram: ";
			cin>>x;

			cout<<"Enter weight in kilogram: ";
			cin>>y;

			cash(x, y);
			
		  }
				
		void cash(float x, float y)   {
		 				float total;
						total=x*y;

						cout<<"Total Price: "<<total << endl;
						discount(total);
						
						}

		void discount(float total){
					       float discount;
					       discount=(total/100)*5;
						discount = total - discount;
					       cout<<"Discounted Net Price (5%): "<<discount << endl;
						
                                               }