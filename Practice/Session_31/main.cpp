#include <iostream>

using namespace std;
/*
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
    Bank_Account b1,b2;
    b1.acc_number=1;
    b2.acc_number=2;
    b1.balance =5000;
    b2.balance=5230.25;
    b1.deposit(1024.35);
    b1.check_bal();
    return 0;
}
op:error
By default class variables are private , there are only accessible within class.
To access them we need to make them public.
*/

/*
There are 3 access specifiers:
private: Any data member/member function is private by default and is accessible only within the class.
protected: Any data member/ member function is accessible only within the class and within it's sub-class.
Public: any data member / member function is accessible within class, within sub class and by objects outside the class as well.
*/

/*
class Bank_Account
{
   public:
   int acc_number;
   float balance;
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1,b2;
    b1.acc_number=1;
    b2.acc_number=2;
    b1.balance =5000;
    b2.balance=5230.25;
    //b1.deposit(1024.35);
    //b1.check_bal();
    cout<<b1.acc_number<<" "<<b1.balance<<endl;
    cout<<b2.acc_number<<" "<<b2.balance<<endl;
    return 0;
}
op:
1 5000
2 5230.25
*/

//In class we can set the default values, whereas in structures we can't assign default values.

/*
class Bank_Account
{
   public:
   int acc_number;
   float balance=0;
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1,b2;
    b1.acc_number=1;
    b2.acc_number=2;
    b1.balance =5000;
    //b2.balance=5230.25;
    //b1.deposit(1024.35);
    //b1.check_bal();
    cout<<b1.acc_number<<" "<<b1.balance<<endl;
    cout<<b2.acc_number<<" "<<b2.balance<<endl;
    return 0;
}
op:
1 5000
2 0
*/

/*
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1,b2;
    b1.acc_number=1;
    b2.acc_number=2;
    //b1.deposit(1024.35);
    //b1.check_bal();
    cout<<b1.acc_number<<" "<<b1.balance<<endl;
    cout<<b2.acc_number<<" "<<b2.balance<<endl;
    return 0;
}
*/

/*
Constructors and destructors
A constructor is a function that is called the moment an object is created.
This function must be public. (Because constructors are accessed by objects).

Rules for constructors:
1.Constructor must have same name as the class name.
2. There should be no return type.
*/
/*
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   Bank_Account()  {cout<<"Your bank account as been successfully created\n"; }
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1[5];
    return 0;
}
op:
Your bank account as been successfully created
Your bank account as been successfully created
Your bank account as been successfully created
Your bank account as been successfully created
Your bank account as been successfully created
*/

/*
3.We can have more than one constructor
4.Multiple constructors can exists as long as their signatures differ.
(Signatures mean the parameters within the function call)
5. There are 3 types of constructors:
Default constructors (No parameters- there can only be one(like hero in movies)).
parameterized constructors (At least one parameter- there can be many(Like villans in movie))
copy constructors:

*/

/*
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   Bank_Account()  {cout<<"Your bank account as been successfully created\n"; }
   Bank_Account(int a)
   {
       acc_number=a;
       cout<<"Your bank account as been successfully created with "<<a<<" account number\n";
   }
   Bank_Account(float a)
   {
       balance=a;
       cout<<"Your bank account as been successfully created with "<<a<<" balance\n";
   }
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1,b2(1050),b3(50.5);
    return 0;
}
//Error
// 50.5 is a double value and their is no constructor which receives double has a parameter.
*/

/*
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   Bank_Account()  {cout<<"Your bank account as been successfully created\n"; }
   Bank_Account(int a)
   {
       acc_number=a;
       cout<<"Your bank account as been successfully created with "<<a<<" account number\n";
   }
   Bank_Account(float a)
   {
       balance=a;
       cout<<"Your bank account as been successfully created with "<<a<<" balance\n";
   }
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1,b2(1050),b3(50.5f);
    return 0;
}

op:
Your bank account as been successfully created
Your bank account as been successfully created with 1050 account number
Your bank account as been successfully created with 50.5 balance
*/
/*
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   Bank_Account()  {cout<<"Your bank account as been successfully created\n"; }
   Bank_Account(int a)
   {
       acc_number=a;
       cout<<"Your bank account as been successfully created with "<<a<<" account number\n";
   }
   Bank_Account(float a)
   {
       balance=a;
       cout<<"Your bank account as been successfully created with "<<a<<" balance\n";
   }
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1(50.5f);
    Bank_Account b2=b1;
    b2.check_bal();
    return 0;
}
op:
Your bank account as been successfully created with 50.5 balance
50.5
*/
/*
There are two types of copy constructors
1. Default copy constructors (when you don't do your own copy constructor, this is called)
2. User defined Constructors (when we create)

Whenever an object is assigned to another object while declaration,
copy constructor is called.
Default copy constructors is also called as bit-by-bit copy constructor.
Default copy constructors copies the object one bit at a time (entirely)
User defined copy constructors is also called as field-by-field copy constructor.
*/

/*
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   Bank_Account()  {cout<<"Your bank account as been successfully created\n"; }
   Bank_Account(int a)
   {
       acc_number=a;
       cout<<"Your bank account as been successfully created with "<<a<<" account number\n";
   }
   Bank_Account(float a)
   {
       balance=a;
       cout<<"Your bank account as been successfully created with "<<a<<" balance\n";
   }
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1(50.5f);
    Bank_Account b2(b1);
    b2.check_bal();
    return 0;
}
op:
Your bank account as been successfully created with 50.5 balance
50.5
*/

/*
//User defined copy constructor
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   Bank_Account()  {cout<<"Your bank account as been successfully created\n"; }
   Bank_Account(int a)
   {
       acc_number=a;
       cout<<"Your bank account as been successfully created with "<<a<<" account number\n";
   }
   Bank_Account(float a)
   {
       balance=a;
       cout<<"Your bank account as been successfully created with "<<a<<" balance\n";
   }
   Bank_Account(Bank_Account &b)
   {
       cout<<"Calling Copy Constructor\n";
   }
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1(50.5f);
    Bank_Account b2(b1);
    b2.check_bal();
    return 0;
}
op:
Your bank account as been successfully created with 50.5 balance
Calling Copy Constructor
0
// When user defined copy constructor is called it doesn't copy contents we should copy manually field by field.
*/

/*
class Bank_Account
{
   int acc_number;
   float balance=0;
   public:
   Bank_Account()  {cout<<"Your bank account as been successfully created\n"; }
   Bank_Account(int a)
   {
       acc_number=a;
       cout<<"Your bank account as been successfully created with "<<a<<" account number\n";
   }
   Bank_Account(float a)
   {
       balance=a;
       cout<<"Your bank account as been successfully created with "<<a<<" balance\n";
   }
   Bank_Account(Bank_Account &b)
   {
       balance=b.balance;
       cout<<"Calling Copy Constructor\n";
   }
   void deposit(int sum) { balance+=sum;  }
   void withdraw(int sum) { balance-=sum;  }
   void check_bal() {  cout<<balance;   }
};
int main()
{
    Bank_Account b1(50.5f);
    Bank_Account b2(b1);
    b2.check_bal();
    return 0;
}
op:
Your bank account as been successfully created with 50.5 balance
Calling Copy Constructor
50.5
*/
/*
Destructors:
    1. Function with the same name as class name but is prefixed by ~ symbol
    2. Execute when an object is deallocated from memory.
    3. There can only be one default non-parameterized destructor.
*/

/*
class Bank_Account
{
   public:
   Bank_Account() {   cout<<"1"<<endl;  }
   ~Bank_Account() {  cout<<"2"<<endl;  }

};
int main()
{
    cout<<"4"<<endl;
    Bank_Account b1;
    cout<<"3"<<endl;
    return 0;
}
op:
4
1
3
2
*/
/*
class Bank_Account
{
   public:
   Bank_Account() {   cout<<"1"<<endl;  }
   ~Bank_Account() {  cout<<"2"<<endl;  }

};
int main()
{
    cout<<"4"<<endl;
    {
        Bank_Account b1;
    }
    cout<<"3"<<endl;
    return 0;
}
op:
4
1
2
3
*/

/*
class Bank_Account
{
   public:
   Bank_Account() {   cout<<"1"<<endl;  }
   ~Bank_Account() {  cout<<"2"<<endl;  }

};
int main()
{
    cout<<"4"<<endl;
    {
        static Bank_Account b1;
    }
    cout<<"3"<<endl;
    return 0;
}
op:
4
1
3
2
*/

/*
class Bank_Account
{
    int a=0;
    public:
    void set_a(int a) {  a=a;  }
    void get_a() {   cout<<a<<endl;  }

};
int main()
{
    Bank_Account b1;
    b1.set_a(50);
    b1.get_a();
    return 0;
}
op:0
*/

/*
THIS pointer:
    whenever a function call by an object is made, the
    address of the object is sent and received by the function (member function) as a pointer.
    This pointer has an identifier as "this".
*/

/*
class Bank_Account
{
    int a=0;
    public:
    void set_a(int a) {  this->a=a;  }
    void get_a() {   cout<<a<<endl;  }

};
int main()
{
    Bank_Account b1;
    b1.set_a(50);
    b1.get_a();
    return 0;
}
op:50
*/

/*
class Bank_Account
{
    int a=0;
    public:
    void set_a(int a)
    {
        this->a=a;
        this->get_a();
    }
    void get_a() {   cout<<a<<endl;  }

};
int main()
{
    Bank_Account b1;
    b1.set_a(50);
    b1.get_a();
    return 0;
}
op:50
   50
*/

/*
class Bank_Account
{
    int a=0;
    public:
    void set_a(int a)
    {
        this->a=a;
        this->get_a();
    }
    void get_a() {   cout<<a<<endl;  }

};
int main()
{
    Bank_Account b1;
    b1.set_a(50);
    int this=5;
    cout<<this<<endl;
    b1.get_a();
    return 0;
}
op:error
this is only valid to be used within a memeber function of a class.
*/
/*
class Bank_Account
{
    int a=0;
    public:
    void set_a(int a)
    {
        this->a=a;
        this->get_a();
        get_a();
    }
    void get_a() {   cout<<a<<endl;  }

};
int main()
{
    Bank_Account b1;
    b1.set_a(50);
    return 0;
}
op:50
50
*/

/*
#include<stdio.h>
class Bank_Account
{
    int a=0;
    public:
    void fun(Bank_Account *b)
    {
        if(this==b)
            printf("IN IF\n");
        else
            printf("IN ELSE\n");
    }

};
int main()
{
    Bank_Account b1;
    b1.fun(&b1);
    return 0;
}

op:IN IF
*/

/*
class Bank_Account
{
    public:

};
void fun()
{
    cout<<"IN FUN"<<endl;
}
int main()
{
    Bank_Account b1;
    b1.fun();
}
op:Error
when a function is called by object it always search in the class.
*/

/*
class Bank_Account
{
    public:
    void fun();//prototype,this function belongs to class

};
//return_type class_name::function_name() { statements }
void Bank_Account::fun()  //function belongs to class
{
    cout<<"IN FUN"<<endl;
}
int main()
{
    Bank_Account b1;
    b1.fun();
}
op:IN FUN
*/

/*
class Bank_Account
{
    public:
    int balance=0;
    void fun1(Bank_Account *b) { b->fun2(); }
    void fun2() { cout<<balance<<endl; }

};
int main()
{
    Bank_Account b1,b2;
    b1.balance=50;
    b2.balance=100;
    b1.fun1(&b2);
}
op:100
*/

//Friend function: firendFunction is a function which is not a part of the class.
// Yet, it can access all private, protected and public data of the class.

/*
class Bank_Account
{
    int balance=0;
    public:
    void get_balance() { cout<<balance<<endl; }
    friend void fun();
};
void fun()
{
    cout<<balance<<endl;
}
int main()
{
    Bank_Account b1;
    b1.fun();
}
op:error
*/

/*
class Bank_Account
{
    int balance=0;
    public:
    void get_balance() { cout<<balance<<endl; }
    friend void fun(Bank_Account &b);
};
void fun(Bank_Account &b)
{
    b.balance=5000;
}
int main()
{
    Bank_Account b1;
    fun(b1);
    b1.get_balance();
}
op:5000
*/

//Friend function cannot be accessed with objects.
//Friend Functions can receive objects and access object's private data within the function scope.
