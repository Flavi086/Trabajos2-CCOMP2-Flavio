#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $"<<account1.getBalance() ;
    cout << "\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance() ;

    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

// display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

 // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();

    int a,b;
    a=account1.getBalance();
    b=account2.getBalance();

    cout << "\n\nCuanto va a retirar para la account1: "; // prompt
    int retireAmount;
    cin >> retireAmount; // obtain user input
    if (retireAmount>a) {
        cout<<"Error en la cuenta 1"<<endl;
        }
    else
        cout << "restando " << retireAmount << " to account1 balance";
        account1.retiro(retireAmount);

    cout << "\n\nCuanto va a retirar para la account2: "; // prompt
    
    cin >> retireAmount; // obtain user input
     if (retireAmount>b) {
        cout<<"Error en la cuenta 2"<<endl;
        }
    else 
        cout << "restando " << retireAmount << " to account1 balance";
        account2.retiro(retireAmount);
    
    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance() << endl;

}