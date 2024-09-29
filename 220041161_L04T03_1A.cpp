#include<iostream>
#include<string>

using namespace std;

Class BankAccount
{
private:
    string accountNum;
    string accountName;
    string accountType;
    double balance;
    const double minBalance;

public:
    void takeInput()
    {
        cout<<"Enter Account number: ";
        cin>>accountNum;

        cout<<"Enter Account Holder Name: ";
        cin>>accountName;

        cout<<"Enter Account Type(current/savings): ";
        cin<<accountType;

        cout<<"Enter Balance: ";
        cin>>balance;

        cout<<"Enter Minimum Account Balance: ";
        cin>>minBalance;
    }
    void showBalance()
    {
        cout<<"Balance: "<<balance<<endl;
    }
    void showInfoBank()
    {
        cout<<"Account Number: "<<accountNum;
    }
    void deposit(double amount)
    {
        if(amount<=0)
        {
            cout<<"No amount to deposit."<<endl;
        }
        else
        {
            balance+=amount;
            cout<<" "<<balance<<"BDT have been deposited. Current Balance is "<<balance-amount<<" BDT."<<endl;
        }
    }
    void withdrawal(double amount)
    {
        if(amount<=0)
        {
            cout<<"No amount to withdraw."<<endl;
        }
        else if((balance-amount)<minBalance)
        {
            cout<<"Cannot withdraw amount since the minimum balance is "<<minBalance<<endl;
        }
        else
        {
            balance-=amount;
            cout<<" "<<amount<<" BDT have been withdrawn from your account. Current Balance: "<balance<<" BDT."<<endl;
        }
    }
    void giveInterest()
    {

    }
};

int main()
{
    BankAccount bank;

    return 0;
}
