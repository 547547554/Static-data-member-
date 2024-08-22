#include <iostream>
using namespace std;

class Customer
{
  string name;
  int acc_no, balance;

public:
  static int total_customer;
  Customer(string name, int acc_no, int balance)
  {
    this->name = name;
    this->acc_no = acc_no;
    this->balance = balance;
    total_customer++;
  }
  void display()
  {
    cout << name << " " << acc_no << " " << balance << " " << total_customer << endl;
  }
  void display_total(){
    cout<<total_customer<<endl;
  }
};

int Customer ::total_customer = 0;

int main()
{
  Customer A1("Rakesh", 1, 1000);
  Customer A2("Jagesh", 2, 1800);
  Customer A3("ragesh", 3, 2000);
  Customer::total_customer=5;
  A1.display_total(); 
}

