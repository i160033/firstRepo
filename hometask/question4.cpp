#include <iostream>
using namespace std;

int main()
{
	float t1,t2,s1,s2,count,discount,bill,p1,p2,final_bill;//declaration of variables
	count=0;
	while (count<2)//taking input two times
	{
		cout<<"\nPlease choose the type of food: \n\n\n";
		cout<<"1.Fish And Chips 	Rs.150 per serving\n";
		cout<<"2.Tea 			Rs.10.50 per serving\n";
		cout<<"3.Paratha and Fried Egg Rs.60 per serving\n";
		cout<<"4.Biryani		Rs.100 per serving\n\n";
		if (count==0)//taking first input
		{
			cout<<"please enter type of food between 1 and 4: ";
			cin>>t1;
			cout<<"please enter the number of servings: ";
			cin>>s1;
		}
		if (count==1)//taking second inputs
		{
			cout<<"please enter type of food between 1 and 4: ";
			cin>>t2;
			cout<<"please enter the number of servings: ";
			cin>>s2;
		}
		count++;
	}
	//calculating discount on given conditions
	discount=0;
	if (t1==2 && t2==3){ discount=0.03; }
	if (t1==1 && t2==2){ discount=0.01; }
	if ((t1==3 && s1>3)||(t2==3 && s2>3)){ discount=0.02; }
	//declaring price
	p1=0; p2=0;
	if (t1==1) { p1=150; }
	if (t2==1) { p2=150; }
	if (t1==2) { p1=10.5; }
	if (t2==2) { p2=10.5; }
	if (t1==3) { p1=60; }
	if (t2==3) { p2=60; }
	if (t1==4) { p1=100; }
	if (t2==4) { p2=100; }
	//calculating bill
	bill=p1+p2;
	final_bill=bill-(discount*bill);
	cout<<"your bill is "<<final_bill<<endl<<endl;
	return 0;
}
