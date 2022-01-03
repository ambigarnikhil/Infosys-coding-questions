#include <iostream>

using namespace std;

/*
Runtime Polymorphism:
2 types and they are: Compile polymorphism, Runtime polymorphism.
Complie time polymorphism: Operator overloading, Function overloading.
*/

/*
class Base
{
    public: void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base b;
    b.fun();
}
//op:In Base class
*/

/*
class Base
{
    public:
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base b;
    b.fun();
}
//op:
//In Base constructor
//In Base class
*/

/*
class Base
{
    public:
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    //b.fun();
}
//No output
*/

/*
class Base
{
    public:
        int a=4;
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    cout<<b->a;
}
op: Run time error (Segmentation Fault)
*/

/*
class Base
{
    public:
        int a=4;
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    Base b1;
    b=&b1;
    cout<<b->a;
}
op:
In Base constructor
4
*/


/*
class Base
{
    public:
        int a=4;
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    b->fun();
}
op:In Base class
*/
/*
class Base
{
    public:
        int a=4;
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    b->Base();
}
//op:Error bcoz it is constructor , pointer can only point to other functions rather than constructors and destructors.
*/

/*
A pointer to a class only point to an object of its own
class or its derived class and nothing else.
*/
/*
class Base
{
    public:
        int a=4;
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->fun();
}
//Error
*/

/*
class Base
{
    public:
        int a=4;
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived: public Base
{
    public: void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->fun();
}
//op:
//In Base constructor
//In Base class   //bcoz base class pointers only points to base class functions.


base class pointers only points to base class functions by default during compile time.
So, if the base class pointer points to a derived class object also, it will only call base class function.
*/
/*
class Base
{
    public:
        Base() {  cout<<"In Base constructor\n";  }
        void fun() { cout<<"In Base class\n"; }
};
class Derived: public Base
{
    public: int a=5;
        void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    cout<<b->a<<endl;
}
//Compile time error
*/



/*
class Base
{
    public: //virtual keyword activates this function only during run time.
        virtual void fun() { cout<<"In Base class\n"; }
};
class Derived: public Base
{
    public: int a=5;
        void fun() { cout<<"In derived class\n"; }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->fun();
}
op:In derived class
*/

/*
Diamond problem
class Base
{
    public:
        //Base() { cout<<"In Base constructor\n";  }
         void fun() { cout<<"In Base class\n"; }
};
class Derived1: public Base
{

};
class Derived2: public Base
{

};
class Derived3: public Derived1, public Derived2
{

};
int main()
{
    Derived3 d;
    d.fun();
}
//op: Error
*/

/*
class Base
{
    public:
        Base() { cout<<"In Base constructor\n";  }
         void fun() { cout<<"In Base class\n"; }
};
class Derived1: public Base
{

};
class Derived2: public Base
{

};
class Derived3: public Derived1, public Derived2
{

};
int main()
{
    Derived3 d;
    //d.fun();
}
op:
In Base constructor
In Base constructor
*/


/*
//Solution for diamond problem
class Base
{
    public:
        Base() { cout<<"In Base constructor\n";  }
         void fun() { cout<<"In Base class\n"; }
};
class Derived1: virtual public Base
{

};
class Derived2: virtual public Base
{

};
class Derived3: public Derived1, public Derived2
{

};
int main()
{
    Derived3 d;
    d.fun();
}
op:In Base constructor
   In Base class
*/

//virtual is keyword used for function overriding.
//virtual keyword also makes the function available during compile time.

// vtable(Virtual table) is tables containing list of virtual function  names


//when we use virtual , only 1 object of base class is created and linked to derived1,derived2.
//when we don't use virtual , 2 object of base class is created .

/*
STL (Standard Template Libraries)

Template- layout.

Helps you implement data structures and algorithms without need to write them from scratch.
*/
