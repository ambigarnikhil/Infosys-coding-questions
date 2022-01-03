#include <iostream>

using namespace std;


//Multiple inheritance:multiple base classes are inherited to single derived class.
//Ambiguity Error
/*
class Savings_account{
    public:
    void check_balance() { cout<<"Show balance of savings account\n"; }

};
class Salaried_account{
    public:
    void check_balance() { cout<<"Show balance of salaried account\n"; }
};
class Salaried_savings_account: public Savings_account,public Salaried_account{

};

int main()
{
    Salaried_savings_account c1;
    c1.check_balance();
}
//op:Errorp
*/

/*
class Savings_account{
    private:
    void check_balance() { cout<<"Show balance of savings account\n"; }

};
class Salaried_account{
    public:
    void check_balance() { cout<<"Show balance of salaried account\n"; }
};
class Salaried_savings_account: public Savings_account,public Salaried_account{

};

int main()
{
    Salaried_savings_account c1;
    c1.check_balance();
}
//op:error(unambiguity error)
*/

/*
class Savings_account{
    private:
    void check_balance(int a) { cout<<"Show balance of savings account\n"; }

};
class Salaried_account{
    public:
    void check_balance() { cout<<"Show balance of salaried account\n"; }
};
class Salaried_savings_account: public Savings_account,public Salaried_account{

};

int main()
{
    Salaried_savings_account c1;
    c1.check_balance(10);
}
//op:error(unambiguity error)
*/
/*
When you perform multiple inheritance,
when both base classes have same function name ,any return type.
its immaterial whether you have same parameters or different parameters.
its also immaterial whether one function is private or not.
(It will always give you ambiguity error when you try to access the function.)
*/

/*
class Savings_account{
    private:
    int check_balance(int a) { cout<<"Show balance of savings account\n"; }

};
class Salaried_account{
    public:
    void check_balance() { cout<<"Show balance of salaried account\n"; }
};
class Salaried_savings_account: public Savings_account,public Salaried_account{

};

int main()
{
    Salaried_savings_account c1;
    c1.check_balance(10);
}
//op:error(unambiguity error)
*/
/*
class Savings_account{
    public:
    Savings_account() { cout<<"Showing savings account\n"; }

};
class Salaried_account{
    public:
    Salaried_account() { cout<<"Showing salaried account\n"; }
};
class Salaried_savings_account: public Savings_account,public Salaried_account{

};

int main()
{
    Salaried_savings_account c1;
}
//op:
//Showing savings account
//Showing salaried account
*/

/*
int main()
{
    string s="It has been a very bad day"; // s is abject of string class.
    s.find("bad");
    //s.replace(); // replace bad with good.
    cout<<s.find("bad")<<endl;
}

//op:19
*/
/*
int main()
{
    string s="It has been a very bad day"; // s is abject of string class.
    //s.find("bad"); // return first index were bad is found in s.
    s.replace(s.find("bad"),3,"good"); // replace bad with good.
    cout<<s<<endl;
}
//op:It has been a very good day
*/
/*
-->Polymorphism:

Multiple forms
One entity exists in multiple forms.
1: Compile Time polymorphism(Operator overloading and Function overloading)
2: Run time Polymorphism(method overriding)

Compile Time polymorphism is achieved in two ways (Operator overloading and Function overloading)

*/
/*
//Operator overloading
int main()
{
    string s1="Hello";
    string s2="world";
    int a=10;
    int b=20;
    cout<<s1+s2<<endl; //+ is performing string concatenation
    cout<<a+b<<endl;   // + is performing arithmetic addition:
}
op:
Helloworld
30
*/

//Function Overloading:
//There can be multiple functions within a class which have
//same name and return type but different parameters or different number of parameters

/*
class A
{
    public:
    void fun() { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    void fun(int a, int b) { cout<<"3\n"; }
    void fun(int a, int b,int c) { cout<<"4\n"; }
};
int main()
{
    A a;
    a.fun();
    a.fun(10);
    a.fun(10,20);
    a.fun(10,20,30);
}
op:
1
2
3
4
*/

/*
class A
{
    public:
    void fun() { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    //void fun(int a, int b) { cout<<"3\n"; }
    void fun(int a, int b,int c) { cout<<"4\n"; }
};
int main()
{
    A a;
    a.fun();
    a.fun(10);
    a.fun(10,20);
    a.fun(10,20,30);
}
op:error(No matching function)
*/

//Default argument values are only available in c++ and python, not in java and c.

/*
class A
{
    public:
    void fun() { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    //void fun(int a, int b) { cout<<"3\n"; }
    void fun(int a, int b,int c=0) { cout<<c<<"\n"; }
};
int main()
{
    A a;
    a.fun();
    a.fun(10);
    a.fun(10,20);
    a.fun(10,20,30);
}
op:
1
2
0
30
*/
/*
class A
{
    public:
    void fun() { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    //void fun(int a, int b) { cout<<"3\n"; }
    void fun(int a, int b=0,int c) { cout<<c<<"\n"; }
};
int main()
{
    A a;
    a.fun();
    a.fun(10);
    a.fun(10,,20);
    a.fun(10,20,30);
}
//op:Error
//optional arguments always right to left
*/
/*
class A
{
    public:
    void fun() { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    //void fun(int a, int b) { cout<<"3\n"; }
    void fun(int a, int b=0,int c=0) { cout<<c<<"\n"; }
};
int main()
{
    A a;
    a.fun();
    a.fun(10);
    a.fun(10,20);
    a.fun(10,20,30);
}
op:ambiguity error
*/
/*
class A
{
    public:
    void fun(char a) { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    void fun(float a) { cout<<"3\n"; }
    void fun(double a) { cout<<"4\n"; }
};
int main()
{
    A a;
    a.fun('a');
    a.fun(10);
    a.fun(10.20);
}
op:
1
2
4
*/

/*
class A
{
    public:
    void fun(char a) { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    void fun(float a) { cout<<"3\n"; }
    //void fun(double a) { cout<<"4\n"; }
};
int main()
{
    A a;
    a.fun('a');
    a.fun(10);
    a.fun(10.20);
}
op:ambiguity error
*/
/*
class A
{
    public:
    void fun(char a) { cout<< "1\n";  }
    void fun(int a) { cout<<"2\n"; }
    void fun(float a) { cout<<"3\n"; }
    //void fun(double a) { cout<<"4\n"; }
};
int main()
{
    A a;
    a.fun('a');
    a.fun(10);
    a.fun(10.20f);
}
op:
1
2
3
*/

/*
Runtime Polymorphism:
During compile time, there is no polymorphism i.e, no entity exists in
multiple forms when program is compilied but when program is executed,
one entity exists in multiple forms



Templates(Generic programming)
STL (Standard Template Libraries)

*/

