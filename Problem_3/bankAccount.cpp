////////////////////////////////
// Filename : bankAccount.cpp
// Author : Sed Centeno
// Date : 10/29/2024
//
// Description :
// BankAccount class implementation file.
/////////////////////////////////

#include <iostream>
#include "bankAccount.h"

BankAccount::BankAccount(string n, float bal) {
  setName(n);
  setBalance(bal);
  }

BankAccount::~BankAccount(){
}

void BankAccount::setName(string n) {
  customerName = n;
}

void BankAccount::setBalance(float bal) {
  balance = bal;
}

string BankAccount::getName(){
  return customerName;
}

float BankAccount::getBalance(){
  return balance;
}

void BankAccount::deposit(float dep){
  if (dep < 0){
    cout << "Must deposit an amount greater than 0." << endl;
    return;
  }
  
  balance += dep;
}

void BankAccount::withdraw(float draw){
  if (draw > balance){
    cout << "Withdraw amount may not be greater than balance." << endl;
    return;
  }

  balance -= draw;
}
