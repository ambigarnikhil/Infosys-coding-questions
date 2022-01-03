#include <iostream>

using namespace std;

/*
//Call by reference
int main()
{
    int a=5;
    int &b = a;
    cout<<b;
    return 0;
}
op:5
*/

/*
Storage classes in C++
1.auto
2.static
3.register
4.extern
5.mutable - Only class members which are non static and non const can be mutable.

Ways to pass data between functions in c++:
    Call by value
    Call by address
    call by reference

reference is an alias name for a variable.
/*
int main()
{
    int a=5;
    int &b = a;
    cout<<b;
    return 0;
}
op:5
*/

/*
int main()
{
    int a=5;
    int &b = a;
    a=25;
    cout<<b;
    return 0;
}
//op:25
*/

/*
int main()
{
    int a=5;
    int &b = a;
    b=25;
    cout<<a;
    return 0;
}
//op:25
*/

/*
int main()
{
    int &b = 5;
    b=25;
    cout<<b;
    return 0;
}
//op:Error
*/

/*
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    swap(a,b);

    cout<<a<<endl<<b<<endl;
}
op:
    20
    10
*/

/*
Classes and Objects
***************************************************
Class-> Blueprint (which has data members and member functions)

Object is called an instance of class (which has own copy of data members);

*/
class Bank_Account
{
   int acc_number;
   float balance;
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    return 0;
}
