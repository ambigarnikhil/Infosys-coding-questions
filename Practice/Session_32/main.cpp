#include <iostream>

using namespace std;
/*
int main()
{

    return 0;
}

Object oriented Programming:

Abstraction: Hiding Functionalities /data.(Abstract classes only available in java)
private(Only accessible within class)

Encapsulation:
(Capsule) - Class is like a capsule which combines data
members and member functions together to form a single entity.

Inheritance:
Derive / Extract / Inherit features of one class onto another class.

Base/ super / parent class(class from which features are inherited)
derived / sub / child class (class that inherits functions)

/*
class Bank_account
{
    public:
    Bank_account() { cout<<"Bank account created\n"; }
};
class savings_account: private Bank_account{
public:
    savings_account() { cout<<"Savings account created\n"; }
} ;
int main()
{
    Bank_account b1;
}
op:Bank account created
*/

/*
Types of inheritance:
Single inheritance(One base class is inherited by one derived class)
Multilevel inheritance(One base class is inherited by one derived class.
                       This derived class in turn is inherited by another derived class)
Hierarchical inheritance(One base class is inherited by multiple derived classes)
Multiple inheritance(Multiple base classes are inherited by a single derived class, Removed as a feature in java. Exists in python)

->Single inheritance
/*
class Bank_account
{
    public:
    Bank_account() { cout<<"Bank account created\n"; }
};
class savings_account: private Bank_account{
public:
    savings_account() { cout<<"Savings account created\n"; }
} ;
int main()
{
    savings_account s1;
}
op:
Bank account created
Savings account created
*/
/*
->Multiple-level inheritance
/*
class Bank_account
{
    public:
    Bank_account() { cout<<"Bank account created\n"; }
};
class savings_account: private Bank_account{
public:
    savings_account() { cout<<"Savings account created\n"; }
} ;
class junior_account: private savings_account{
public:
    junior_account() { cout<<"Junior account created\n"; }
} ;
int main()
{
    junior_account j1;
}
op:
Bank account created
Savings account created
Junior account created
*/


//->Hierarchical inheritance
/*
class Bank_account
{
    public:
    Bank_account() { cout<<"Bank account created\n"; }
};
class savings_account: private Bank_account{
public:
    savings_account() { cout<<"Savings account created\n"; }
} ;
class current_account: private Bank_account{
public:
    current_account() { cout<<"current account created\n"; }
} ;
int main()
{
    savings_account j1;
    current_account c1;
}
op:
Bank account created
Savings account created
Bank account created
current account created
*/

//->Multiple inheritance
/*
class Savings_account{

};
class Salaried_account{

};
class Salaried_savings_account: public Savings_account,public Salaried_account{


};
*/


/*
class Derived_class_name: access_specifier Base_class_name

Access_specifier while inheriting:
1.Private Inheritance
Base class        Derived class
-------------------------------
private           inaccessible
protected         protected
public            private

2.Protected inheritance
Base class        Derived class
-------------------------------
private           inaccessible
protected         protected
public            protected

3.public inheritance
Base class        Derived class
-------------------------------
private           inaccessible
protected         protected
public            public

/*
class Base
{
    private: int base_private=0;
    protected: int base_protected=0;
    public: int base_public=0;
    void fun() { cout<<"IN BASE CLASS\n"; }
};
class Derived: public
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
*/

/*
class Bank_account
{
    public:
    Bank_account() { cout<<"Bank account created\n"; }
};
class savings_account: private Bank_account{
public:
    savings_account() { cout<<"Savings account created\n"; }
} ;
class current_account: private Bank_account{
public:
    current_account() { cout<<"current account created\n"; }
} ;
int main()
{
    savings_account j1;
    current_account c1;
}
op:
Bank account created
Savings account created
Bank account created
current account created
*/





/*
Polymorphism:

*/
