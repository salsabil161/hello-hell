#include<iostream>

using namespace std;

class Flight
{
private:
    int fnum;
    string destination;
    float distance;
    float maxFuelCapacity;

    double calFuel()
    {
        if(distance<=1000)
        {
            return maxFuelCapacity=500;
        }
        else if(distance>1000 && distance<=2000)
        {
            return maxFuelCapacity=1100;
        }
        else if(distance>2000)
        {
            return maxFuelCapacity=2200;
        }
        else
        {
            cout<<"Invalid distance."<<endl;
        }
    }

public:
    void feedInfo()
    {
        cout<<"Enter Flight number: ";
        cin>>fnum;

        cout<<"Enter Destination: ";
        cin>>destination;

        cout<<"Enter Distance: ";
        cin>>distance;

        cout<<"Enter Max Fuel Capacity: ";
        cin>>maxFuelCapacity;
    }

    void showInfo()
    {
        cout<<"Flight Number: "<<fnum<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Distance: "<<distance<<endl;
        cout<<"Max Fuel Capacity: "<<maxFuelCapacity<<endl;
        calFuel();
        if(maxFuelCapacity <2200 && maxFuelCapacity>500)
        {
            cout<<"Fuel capacity is fit for this flight distance."<<endl;
        }
        else
        {
            cout<<"Not sufficient Fuel Capacity for this flight."<<endl;
        }
    }

};

int main()
{
    Flight fl;

    fl.feedInfo();
    fl.showInfo();

    return 0;

}
