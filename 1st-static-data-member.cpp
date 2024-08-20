//they are attribute of classes or class member 
//It is declared using static keywords 
//only one copy of that member is created for the entire class is shared att the object 
//It is intialized before any object of class is created 
// #include <iostream>
// using namespace std;

// class Customer
// {
//     string name;
//     int acc_no, balance;
//     int total_customer;

//     public:
//     Customer(string name , int acc_no, int balance )
//     {
//         this->name=name;
//         this->acc_no=acc_no;
//         this->balance=balance;
//         total_customer=1;
//     }
//     void display()
//     {
//         cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customer<<endl;
//     }
// };

// int main()
// {
//     Customer A1("Rakesh", 1,1000);
//     Customer A2("Jagesh",2,1800);

//     A1.display();
//     A2.display();

// }


#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_no, balance;
    static int total_customer;

    public:
    Customer(string name , int acc_no, int balance )
    {
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_customer++;
    }
    void display()
    {
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customer<<endl;
    }
};

int Customer :: total_customer=0;

int main()
{
    Customer A1("Rakesh", 1,1000);
    Customer A2("Jagesh",2,1800);
    Customer A3("ragesh",3,2000);

    A1.display();
    A2.display();
     A3.display();
}