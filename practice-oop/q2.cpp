#include <iostream>
#include <string>
using namespace std;

class bank{
    private:
        int accountNumber, balance, password;
        string accountHolderName;
    public:
    void set_data(int no,string name, int d){
        accountNumber = no;
        accountHolderName = name;
        balance = d;
    }
    void withdraw(int wamount){
        if(wamount <= balance){
            cout << "you can withdraw" << endl;
        }else{
            cout << "entered amount is greater than balance" << endl;
        }
    }
    void display(){
        cout << "account number: " << accountNumber << endl
             << "account holder's name: " << accountHolderName << endl
             << "balance: " << balance;

    }

};


int main(){

    bank account1;

    int deposite, ano, wamount;
    string aname;
    cout << "enter the account number: ";
    cin >> ano;
    cout << "enter the account holder's name: ";
    cin >> aname;
    cout << "enter the amount to be deposited: ";
    cin >> deposite;

    account1.set_data(ano, aname, deposite);
    
    cout << "enter the amount to withdraw: ";
    cin >> wamount;
    account1.withdraw(wamount);

    account1.display();

    return 0;
}
