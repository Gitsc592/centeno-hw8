////////////////////////////////
// Filename : bankApp.cpp
// Author : Sed Centeno
// Date : 10/29/2024
//
// Description :
// Main function file for the bank application homework.
// Instantitates multiple bankAccount objects and sets/gets balances, names,
// etc.
// 
// Command Line Arguments:
// None
// 
// Example Invocation:
// ./bankApp
/////////////////////////////////

#include <iostream>
#include "bankAccount.h"

int main(int argc, char* argv[]) {
  // Problem_2a
  BankAccount jackAccount("Jack Smith", 50);

  // Problem_2b
  BankAccount jillAccount("Jill Brian", 100);

  // Problem_2c
  BankAccount bankArray[3] = {BankAccount("Ralph Kramden", 10),
  BankAccount("Alice Kramden", 20), BankAccount("Ed Norton", 30)};

  // Problem_2d
  jackAccount.deposit(30);
  jillAccount.deposit(30);
  bankArray[0].deposit(30);
  bankArray[1].deposit(30);
  bankArray[2].deposit(30);

  // Problem_2e
  jackAccount.withdraw(20);
  jillAccount.withdraw(20);
  bankArray[0].withdraw(20);
  bankArray[1].withdraw(20);
  bankArray[2].withdraw(20);

  //Problem_2f
  cout << "The balance of " << jackAccount.getName() << " is: $";
  cout << jackAccount.getBalance() << endl;

  cout << "The balance of " << jillAccount.getName() << " is: $";
  cout << jillAccount.getBalance() << endl;

  cout << "The balance of " << bankArray[0].getName() << " is: $";
  cout << bankArray[0].getBalance() << endl;


  cout << "The balance of " << bankArray[1].getName() << " is: $";
  cout << bankArray[1].getBalance() << endl;

  cout << "The balance of " << bankArray[2].getName() << " is: $";
  cout << bankArray[2].getBalance() << endl;

  return 0;
}
