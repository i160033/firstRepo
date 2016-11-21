#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Choose a cold drink"<<endl;
	cout<<"1.Coke\n2.Sprite\n3.Water\n4.Pulpy\n5.Sting\n\n";
	cout<<"please enter your choice: ";
	cin>>number;
	switch(number)
	{
		case 1:
			cout<<"Your choice is Coke"<<endl;
			break;
		case 2:
			cout<<"Your choice is Sprite"<<endl;
			break;
		case 3:
			cout<<"Your choice is Water\n";
			break;
		case 4:
			cout<<"Your choice is Pulpy\n";
			break;
		case 5:
			cout<<"Your choice is Sting\n";
		
	}
	return 0;
}
