////////////////////////////////
// Filename : bankAccount.h
// Author : Sed Centeno
// Date : 10/29/2024
//
// Description :
// BankAccount class delcaration header file, implemented in BankAccount.cpp and
// used in BankApp.cpp
/////////////////////////////////

using namespace std;

class BankAccount {
  private:
    string customerName;
    float balance;
    void setName(string n);
    void setBalance(float bal);

  public:
    BankAccount(string n, float bal);
    string getName();
    float getBalance();
    void deposit(float dep);
    void withdraw(float draw);
    ~BankAccount();
};
