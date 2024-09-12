#include<iostream>

using namespace std;

enum etype
{
    laborer, secretary, manager, accountant, executive, researcher
};

int main()
{
    char firstLtr;
    etype employee;

    cout<<"Please enter the first letter of employee type \n";
    cout<<"(laborer, secretary, manager, accountant, executive, researcher):";
    cin>>firstLtr;

    switch(firstLtr)
{
case 'l':
    employee=laborer;
    break;
case 's':
    employee=secretary;
    break;
case 'm':
    employee=manager;
    break;
case 'a':
    employee=accountant;
    break;
case 'e':
    employee=executive;
    break;
case 'r':
    employee=researcher;
    break;
default:
    cout<<"invalid input.\n"<<endl;
    return 1;
}

    cout<<"The Employee is a ";

switch(employee)
{
case laborer:
    cout<<"Laborer.";
    break;
case secretary:
    cout<<"Secretary.";
    break;
case manager:
    cout<<"Manager.";
    break;
case accountant:
    cout<<"Accountant.";
    break;
case executive:
    cout<<"Executive.";
    break;
case researcher:
    cout<<"Researcher.";
    break;
default:
    cout<<"Invalid Choice!";
    return 1;
}


return 0;
}
