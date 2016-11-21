#include <iostream>
using namespace std;
int main(){
	int units;
	cout<<"please enter the number of units: ";
	cin>>units;
	int count=0;
	float bill=0;
	if (units<=50){
		bill=0.75*units;
	}
	if (50<units<=100){
		bill=(0.75*50)+((units-50)*0.85);
	}
	if (100<units<=200){
		bill=(0.75*50)+(0.85*50)+((units-100)*1.50);
	}
	if (200<units<=300){
		bill=(0.75*50)+(0.85*50)+(100*1.50)+((units-200)*2.20);
	}
	if (units>300){
		bill=(0.75*50)+(0.85*50)+(100*1.50)+(100*2.20)+((units-300)*3.00);
	}
	cout<<"the bill is "<<bill<<endl;
	return 0;
}
