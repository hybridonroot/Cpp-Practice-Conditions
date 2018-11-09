/*MISBAH UR REHMAN 
  SP17-BCS-026*/
#include <iostream>
using namespace std;
int main(){
	int total_units,cost;
	cout<<"Enter units consumed=";
	cin>>total_units;
	if(total_units<=500){
		cout<<"As units consumed "<<total_units<<" are <=500 then the cost is Rs. 3 per unit"<<endl;
		cost=total_units*3;
		cout<<"So total Consumed units cost ="<<cost<<endl;
	}
	else if(total_units>500&&total_units<=700){
		cout<<"As units consumed "<<total_units<<" are >500 and <=700 then the cost is Rs. 7 per unit"<<endl;
		cost=total_units*7;
		cout<<"So total Consumed units cost ="<<cost<<endl;	
			}
    else if(total_units>700){
		cout<<"As units consumed "<<total_units<<" are >700 then the cost is Rs. 10 per unit"<<endl;
		cost=total_units*10;
		cout<<"So total Consumed units cost ="<<cost<<endl;
			}	
	else {
		cout<<"invalid units";
	}
}

