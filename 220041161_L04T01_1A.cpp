#include<iostream>

using namespace std;

class Calculator
{
private:
    int currstatus;

    int getStatus()
    {
        return currstatus;
    }
    void setStatus(int value)
    {
        currstatus=value;
    }

public:
    void add(int value)
    {
        setStatus(getStatus()+value);
        cout<<endl;
    }
    void subtract(int value)
    {
        setStatus(getStatus()-value);
        cout<<endl;
    }
    void multiply(int value)
    {
        setStatus(getStatus()*value);
        cout<<endl;
    }
    int divideby(int value)
    {
        cout<<endl;
        if(value==0)
        {
            cout<<"Invalid arithmetic operation."<<endl;
        }
        else
        {
            int remainder;
            remainder=getStatus()%value;
            setStatus(getStatus()/value);
            return remainder;
        }
    }
    void clear()
    {
        currstatus=0;
        cout<<endl;
    }
    void display()
    {
        cout<<"Calculator Display: "<<currstatus;
        cout<<endl;
    }
    ~Calculator()
    {
        cout<<"Destructor of the calculator object is called."<<endl;
    }
};

int main()
{
    Calculator c;

    c.add(10);
    c.display();

    c.add(7);
    c.display();

    c.multiply(31);
    c.display();

    c.subtract(42);
    c.display();

    c.divideby(7);
    c.display();

    c.divideby(0);
    c.display();

    c.add(3);
    c.display();

    c.clear();
    c.display();

    return 0;
}
