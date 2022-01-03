#include <iostream>
#include<stack>

using namespace std;

/*
int main()
{
    stack<int> nik;
    nik.push(20);
    nik.push(21);
    nik.push(22);
    nik.push(23);

    cout<<nik.top()<<endl;
    nik.pop();
    cout<<nik.size();
    cout<< nik.empty();


}
*/

/*
// Call by value
void fun(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main()
{
    int a=10,b=20;
    fun(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
//10 20
*/

/*
//Call by address
void fun(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
    int a=10,b=20;
    fun(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
//20 10
*/

/*
int main()
{
    int a=10;
    int &b=a;
    b=50;
    cout<<a<<endl;
    return 0;
}
//50
*/


/*
//reference variables can only point to other variable address.
//Pass by reference
void fun(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main()
{
    int a=10,b=20;
    fun(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
//20 10
*/

/*
class A{
    public:
        int y=0;
        mutable int z=0;
};
int main()
{
    const A a;
    a.z=10;
    cout<<a.z<<endl;
}
//10
//z is mutable and y is constant
*/


/*
class A{
    public:
        static const int z=0;
};
int main()
{
    A a;
    cout<<a.z<<endl;
}
//0
*/

/*
class A
{
private:
    int a=10;
public:
    static int z;
    friend void fun(A &object);
};
void fun(A &object)
{
    cout<<"IN FUNCTION FUN\n";
    cout<<object.a;
}
int main()
{
    A a;
    fun(a);
}
IN FUNCTION FUN
10
*/

/*
class Base
{
  private: int base_private=0;
  protected: int base_protected=0;
  public: int base_public=0;
};
class Derived: private Base
{

};
*/
/*
class Base1
{
    public:   void fun1() {cout<<"1\n"; }
};
class Base2
{
    public:   void fun2() {cout<<"2\n"; }
};
class Derived: public Base1,public Base2
{

};
int main()
{
    Derived d;
    d.fun1();
    d.fun2();
}
//1 2
*/

/*
class Base1
{
    public:   void fun() {cout<<"1\n"; }
};
class Base2
{
    public:   void fun() {cout<<"2\n"; }
};
class Derived: public Base1,public Base2
{

};
int main()
{
    Derived d;
    d.fun();
}
//ambiguous error
*/

/*
class Base1
{
    public:   void fun(int a, int b, int c, int d) {cout<<"1\n"; }
};
class Base2
{
    public:   void fun() {cout<<"2\n"; }
};
class Derived: public Base1,public Base2
{

};
int main()
{
    Derived d;
    d.fun(10,20,30,40);
}
//ambiguous error
*/
/*
class Base1
{
    public:   void fun1() {cout<<"1\n"; }
};
class Base2
{
    public:   void fun2() {cout<<"2\n"; }
};
class Derived: public Base1,public Base2
{

};
int main()
{
    Derived d;
    d.fun1();
    d.fun2();
}
//1 2
*/

/*
class Base1
{
    public:   void fun() {cout<<"1\n"; }
};
class Base2
{
    public:   void fun() {cout<<"2\n"; }
};
class Derived: public Base1,public Base2
{

};
int main()
{
    Derived d;
    d.fun();
}
//ambiguous error
*/

/*
class Base1
{
    public:   void fun() {cout<<"1\n"; }
};
class Base2
{
    public:   void fun() {cout<<"2\n"; }
};
class Derived: public Base1,public Base2
{
public:
    void call_fun()
    {
            Base1::fun();
            Base2::fun();
    }

};
int main()
{
    Derived d;
    d.call_fun();
}
//1
//2
*/

/*
int main()
{
    string s1="HELLO";
    string s2="World";
    string s3= s1+s2;
    int x=10,y=20;
    int z=x+y;
    cout<<s3<<endl;
    cout<<z<<endl;
}
//HELLOWorld
//30
*/
/*
class Base
{
    public: void fun()  { cout<<"1"; }
};
class Derived: public Base
{
    public: void fun()  { cout<<"2"; }
};
int main()
{
    Derived d;
    d.fun();
}
//ambiguity
*/

/*
class Base
{
    public: void fun()  { cout<<"1"; }
};
class Derived: public Base
{
    public: void fun()  { cout<<"2"; }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->fun();
}
//1
*/

/*
class Base
{
    public: virtual void fun()  { cout<<"1"; }
};
class Derived: public Base
{
    public: void fun()  { cout<<"2"; }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->fun();
}
//2
*/

/*
class Person
{
public:
    int age;
    Person(int a)
    {
        if(a<0)
        {
            age=0;
            cout<<"SEtting age to 0"<<endl;
        }
        else
            age=a;
    }
        void amIOld(){
        // Do some computations in here and print out the correct statement to the console
        if(age<13)
            cout<<"You are young."<<endl;
        else if(age>=13 && age<18)
        {
            cout<<"You are a teenager."<<endl;
        }
        else
            cout<<"You are old."<<endl;
    }
    void yearPasses(){
        age=age+3;

    }
};
int main()
{
    Person p(18);
    p.amIOld();
    p.yearPasses();
    p.amIOld();

}
*/
#include<cstring>
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int len1= s1.length();
    int len2= s2.length();
    cout<<len1<<endl;
    cout<<len2<<endl;
    sort(s1,s1+len1);
    sort(s2,s2+len2);
    cin>>s1;
    cin>>s2;

}


