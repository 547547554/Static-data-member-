#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_no, balance;
    static int total_customer; //<-- they are attribute or class member

public:
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
    void display_customer()
    {
        cout << total_customer << endl;
    }
};

int Customer :: total_customer = 0;

int main()
{
    Customer A1("Rakesh", 1, 1000);
    Customer A2("Jagesh", 2, 2000);
    Customer A3("Rajesh", 3, 3000);
     Customer A4("Rajesh", 4, 4000);
    // A1.display_customer();
    // A2.display_customer();
    A3.display_customer(); 

}
