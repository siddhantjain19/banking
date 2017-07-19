#include<iostream>

using namespace std;

class account{
private:
  int acc_num;
  double acc_bal;
  char name[30];

public:
  account();
  void add_account();
  void withdraw();
  void deposit();
  void display();
};
