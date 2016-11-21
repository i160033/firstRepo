#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Choose a cold drink"<<endl;
	cout<<"1.Coke\n2.Sprite\n3.Water\n4.Pulpy\n5.Sting\n\n";
	cout<<"please enter your choice: ";
	cin>>number;
	if (number==1) { cout<<"your choice is Coke"; }
	if (number==2) { cout<<"your choice is Sprite"; }
	if (number==3) { cout<<"your choice is Water"; }
	if (number==4) { cout<<"your choice is Puply"; }
	if (number==5) { cout<<"your choice is Sting"; }
	
	
	return 0;
}
