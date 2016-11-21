#include <iostream>
using namespace std;

int main()
{
	
	int year=1626;
	float investment=24.0;
	while (year<=2016)//checking till present date
	{
		investment=investment+(0.04*investment);//adding interest
		year++;
		if (year%20==6)
		{
			cout<<year<<" = "<<investment<<endl;//printing after every twenty years
		}
	}
	return 0;
}
