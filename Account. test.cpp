//
// Created by ary.lelievre on 2/7/2019.
//#include <iostream>
#include "account.h"


using namespace std;
int main()
{
     Account account1{ "jane green",50};
     Account account2{ "john blue", 7};
     cout << "account1: " << account1.getName() <<  "balance is $"
     << account1.getBalance();
    cout << "account2: " << account2.getName() <<  "balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin>> depositAmount;
    cout << "adding"" << depositAmout << "to account1 balance;

    cout << "\n\naccount1: " << account1.getName()<< balance is $
    << account2.getBalance();

    cout << "\n\naccount2: " << account2.getName()<< balance is $
    << account2.getBalance();


    cout << "account1 name is: " << account1.getName()<<endl;
    cout << "account2 name is: " << account1.getName()<<endl;
}

