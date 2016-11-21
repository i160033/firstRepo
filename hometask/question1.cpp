#include <iostream>

using namespace std;

int main()
{
    float basic_salary,final_salary;
    cout<<"please enter basic salary: ";
    cin>>basic_salary;
    if (basic_salary<=20000)
    {
        final_salary=basic_salary+(basic_salary*0.2)+(basic_salary*0.2);
    }
    if (200000<basic_salary<30000)
    {
        final_salary=basic_salary+(basic_salary*0.25)+(basic_salary*0.3);
    }
    if (basic_salary>=30000)
    {
        final_salary=basic_salary+(basic_salary*0.4)+(basic_salary*0.3);
    }
    cout<<"the final salary of the employ is "<<final_salary<<endl;
    return 0;
}

