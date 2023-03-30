#include <string>

class Account {
public:
    Account(std::string accountName, int initialBalance ): name{accountName} {
    if (initialBalance > 0) { // if the initialBalance is valid
        balance = initialBalance;
        }
    }
    void deposit(int depositAmount) {
        if (depositAmount > 0) { // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance
        }
    }
    int getBalance() const {
        return balance;
    }
    void setName(std::string accountName) {
        name = accountName;
    }
    std::string getName() const {
        return name;
    }
    void retiro(int retireAmount){
        if(retireAmount < balance){
            balance=balance - retireAmount;  
        }
        else
            std::cout<<" ERROR, USTED NO CUENTA CON SALDO SUFICIENTE, NO SE LLEVARA A CABO SU RETIRO";
    }
private:
    std::string name; // account name data member
    int balance{0};
};