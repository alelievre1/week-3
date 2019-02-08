/// Created by ary.lelievre on 2/7/2019.
//

#ifndef ARY_LELIEVRE_ACCOUNT_H
#define ARY_LELIEVRE_ACCOUNT_H

#endif //ARY_LELIEVRE_ACCOUNT_H

// Acoount.h
#include <string>
class Account{
public:
    Account (std::string accountName, int initialBalance)
    :name{accountName} {

        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }
    void deposit(int depositAmount){
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }
    int getBalance() const{
        return balance;
    }

    void setName(std::string accountName) {
        name = accountName; // store the account name

    } // empty body
    // member function that retrieves the account nmae
    std::string getName() const {
        return name; //// return name's value to this function
    }
private:
    std::string name; // Data member containing account
    int balance{0};
}; // end class Account
