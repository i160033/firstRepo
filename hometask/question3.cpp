#include <iostream>

using namespace std;

int main()
{
    char vehicleType;
    int parkingTime=1;
    char userName[]="";
    float parkingFee;
    cout<<"please enter user name: ";
    cin>>userName;
    cout<<"please enter parking time: ";
    cin>>parkingTime;
    if (parkingTime<=0)
    {
        cout<<"invalid parking time, time must be a positive integer"<<endl;
        return 0;
    }
    cout<<"please enter vehicle type \n C for car \n M for motorbike \n T for truck"<<endl;
    cin>>vehicleType;
    if ((vehicleType!='c' && vehicleType!='C') && (vehicleType!='t' && vehicleType!='T') &&( vehicleType!='m' && vehicleType!='M') )
    {
        cout<<"invalid vehicle type"<<endl;
        return 0;
    }
    if (vehicleType=='c' || vehicleType=='C')
    {
        parkingFee=5*parkingTime;
    }
    if (vehicleType=='m' || vehicleType=='M')
    {
        parkingFee=2*parkingTime;
    }
    if (vehicleType=='t' || vehicleType=='T')
    {
        parkingFee=10*parkingTime;
    }
    if (parkingTime>12)
    {
        parkingFee=parkingFee-(0.5*parkingFee);
    }
    else
    {
        if (parkingFee>4)
        {
            parkingFee=parkingFee-(0.25*parkingFee);
        }
    }
    cout<<"User Name: "<<userName;
    cout<<endl;
    cout<<"Vehicle Type: "<<vehicleType<<endl;
    cout<<"Parking Fee: "<<parkingFee<<endl;
    return 0;
}








