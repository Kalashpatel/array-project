#include <iostream>
#include<string>
using namespace std;

class BankAccount{

    protected:
        int accountNumber;
        string accountHolderName;
        double balance;

    public:
        void set_data(int a){

            cout << "Enter the Account Details of person " << a + 1 << endl << endl;

            cout << "Enter the account number: ";
            cin >> accountNumber;

            cout << "Enter the account holder's name: ";
            cin.ignore();
            getline(cin, accountHolderName);

            cout << "Enter the balance of account: ";
            cin >> balance;

            cout << endl;
        }
        int getAccountNo(){
            return accountNumber;
        }
        double getBalance(){
            return balance;
        }
        string getName(){
            return accountHolderName;
        }
        void deposite(double amount){
            if(amount > 0){
                balance += amount;
                cout << "amount Rs. " << amount << " deposited succesfully" << endl << endl;
            }
            else{
                cout << "invalid amount entered" << endl;
            }
        }
        virtual void withdraw(double wamount, double b){
            if(wamount <= b){
                balance -= wamount;
                cout << wamount << "rs. withdrawn succesfully." << endl << endl;
            }
            else{
                cout << "Entered amount is greater than balance" << endl << endl;
            }
        }

        virtual void calculateInterest(){
            cout << "interest is not calculated here";
        }

        virtual void fixedInterest(int t){
            cout << "interest is not calculated here";
        }
};
class savingsAccount : public BankAccount{
    double interest;
    int interestRate = 8;

    public:
        virtual void calculateInterest(){
            double interest = (balance * interestRate) / 100;
            cout << "Interest for account " << accountNumber << " for 1 year is Rs. " << interest << endl << endl;
        }

};
class checkingAccount : public BankAccount{

    const double overdraftLimit = 1000;

    virtual void withdraw(double wamount, double b){
        if(wamount <= b + overdraftLimit){
            balance -= wamount;
            cout << wamount << "rs. withdrawn succesfully using overdraft facility." << endl;
        }else{
            cout << "Enter amount to withdraw is even greater than overdraft limit." << endl;
        }
    }
};
class fixedDeposite : public BankAccount{
    int fixedDepositeInterest = 10;

    virtual void fixedInterest(int t){
        double Finterest, finalAmount;
        Finterest = (balance * fixedDepositeInterest * t) / 100;
        finalAmount = balance + Finterest;
        cout << "Interest on you fixed deposite account balance is: " << Finterest << " and your final amount after " << t << " months will be: " << finalAmount << endl << endl;
    }
};


int main(){

    int n, i;
    bool found = false;

    cout << "Enter the number of person: ";
    cin >> n;
    cout << endl;
    BankAccount** Person = new BankAccount*[n]; 

    for(i = 0; i < n; i++){
       int accountType;
       cout << "Press 1 to create Savings Account." << endl
            << "Press 2 to create account with overdraft facility." << endl
            << "Press 3 to create Fixed deposite Account." << endl << endl
            << "Select your account type: ";
       cin >> accountType;
       cout << endl;

       if(accountType == 1){
        Person[i] = new savingsAccount();
        Person[i]->set_data(i);

       }else if(accountType == 2){
        Person[i] = new checkingAccount();
        Person[i]->set_data(i);

       }else if(accountType == 3){
        Person[i] = new fixedDeposite();
        Person[i]->set_data(i);

       }else{
        cout << "You have entered the wrong choice of account, defaulting to savings account." << endl;
        Person[i] = new savingsAccount();
        Person[i]->set_data(i);
       }
    }
    cout << "Account details of " << n << " persons entered succesfully" << endl << endl;

    int choice;

    do{
        cout << "Press 1 to deposite money." << endl;
        cout << "Press 2 withdraw money." << endl;
        cout << "Press 3 to display balance." << endl;
        cout << "Press 4 to display account information." << endl;
        cout << "Press 5 to calculate savings account interest for 1 year." << endl;
        cout << "Press 6 to calculate fixed deposite acoount's interest." << endl;
        cout << "Press 0 to exit." << endl;
        cout << "Select your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << endl;
            int wano;
            cout << "Enter the account no: ";
            cin >> wano;

            for(i = 0; i < n; i++){
                if(Person[i]->getAccountNo() == wano){
                    double amount;
                    cout << "Enter the amount to deposit: ";
                    cin >> amount;
                    Person[i]->deposite(amount);
                    found = true;
                }
            }
            if(!found){
                cout << "You have entered wrong account number" << endl;
                cout << "==============================" << endl << endl;
            }

            break;
        case 2:

            cout << endl;
            int ano;
            cout << "Enter the account no: ";
            cin >> ano;

            for(i = 0; i < n; i++){
                if(Person[i]->getAccountNo() == ano){
                    double amount, availableBalance;
                    cout << "Enter the amount you want to withdraw: ";
                    cin >> amount;
                    availableBalance = Person[i]->getBalance();
                    Person[i]->withdraw(amount, availableBalance);
                    found = true;
                    cout << endl << endl;
                }
            }
            if(!found){
                cout << "You have entered wrong account number" << endl;
                cout << "==============================" << endl << endl;
            }

            break;

        case 3:

            cout << endl;
            int bano;
            cout << "Enter the account no: ";
            cin >> bano;
            cout << endl;

            for(i = 0; i < n; i++){
                if(Person[i]->getAccountNo() == bano){
                    cout << "Balace is: " << Person[i]->getBalance() << endl << endl;
                    found = true;
                }
            }
            if(!found){
                cout << "You have entered wrong account number" << endl;
                cout << "==============================" << endl << endl;
            }

            break;

        case 4:

            cout << endl;
            int dano;
            cout << "Enter the account no: ";
            cin >> dano;
            cout << endl;

            for(i = 0; i < n; i++){
                if(Person[i]->getAccountNo() == dano){
                    cout << "Account Number is: " << Person[i]->getAccountNo() << endl;
                    cout << "Account holder's name is: " << Person[i]->getName() << endl;
                    cout << "Available balance is: " << Person[i]->getBalance() << endl << endl;
                    found = true;
                }
            }
            if(!found){
                cout << "You have entered wrong account number" << endl;
                cout << "==============================" << endl << endl;
            }

            break;

        case 5:

            cout << endl;
            int Iano;
            cout << "Enter the account no: ";
            cin >> Iano;
            cout << endl;

            for (i = 0; i < n; i++){
                if(Person[i]->getAccountNo() == Iano){
                    Person[i]->calculateInterest();
                    found = true;
                }
            }
            if(!found){
                cout << "You have entered wrong account number" << endl;
                cout << "==============================" << endl << endl;
            }

            break;

        case 6:

            cout << endl;
            int fano;
            cout << "Enter the account no: ";
            cin >> fano;
            cout << endl;

            for(i = 0; i < n; i++){
                if(Person[i]->getAccountNo() == fano){
                    int term;
                    cout << "Enter the no of months for fixed deposite: ";
                    cin >> term;

                    Person[i]->fixedInterest(term);

                    found = true;
                }
            }
            if(!found){
                cout << "You have entered wrong account number" << endl;
                cout << "==============================" << endl << endl;
            }

            break;

        case 0:
            break;

        default:
            break;
        }
    }while (choice != 0);

    

    return 0;
}