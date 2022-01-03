#include <iostream>

using namespace std;

//Generic Programming:
//GP creates Functions and classes without specifing the data type.
//To not specify datatypes, we use the concepts of templates.
//
//Generic function is created using Function templates.

/*
template<class T> T fun(T a, T b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<fun(10,20)<<endl;
    cout<<fun(10.5,20.56)<<endl;
}
op:
20
20.56
*/
/*
template<class T1,class T2> void fun(T1 a, T2 b)
{
    cout<<"First variable is "<< a <<" and size is "<< sizeof(a)<<endl;
    cout<<"First variable is "<< b <<" and size is "<< sizeof(b)<<endl;
}
int main()
{
    fun('a',20.5);
}
op:
First variable is a and size is 1
First variable is 20.5 and size is 8
*/

/*
//Template Overloading
template<class T1> void fun(T1 a)
{
    cout<<"First Function\n";
}
template<class T1,class T2> void fun(T1 a, T2 b)
{
    cout<<"Second Function\n";
}
int main()
{
    fun(10);
    fun('a',20.5);
}
op:
First Function
Second Function
*/

/*
template<class T> class A
{
    public:
    T var;
};
int main()
{
    A<int> a1;
    A<char> a2;
    cout<<sizeof(a1.var)<<sizeof(a2.var)<<endl;
}
op:41
*/

/*
Templates help in reducing duplicates codes which require different datatypes.
Template function can be overloaded.
*/

/*
STL(Standard Template Libraries)-predefined data structures and algorithms for easy access for us.
vector= auto-resizable array.
list - Double linked list
Forward list = single linked list.
dequeue = Double ended queue.
set = Unique set of elements
multiset=
map = unique set of key-value pairs
multimap
stack=FILO
queue=FIFO
priority queue= FIFO ds with priority for each element added.
*/

/*
//Vector
#include<vector>
int main()
{
    vector<string> emails;
    emails.push_back("ambigarnikhil@gmail.com");
    cout<<emails.size()<<endl;
    emails.push_back("ambigarnikhil26@gmail.com");
    cout<<emails.size()<<endl;
}
op:
1
2
*/
/*
#include<vector>
int main()
{
    vector<string> emails;
    emails.push_back("ambigarnikhil@gmail.com");
    emails.push_back("ambigarnikhil26@gmail.com");
    for(int i=0;i<emails.size();i++)
        cout<<emails[i]<<endl;
}
op:
ambigarnikhil@gmail.com
ambigarnikhil26@gmail.com
*/

                               END OF C++

*************************************************************************


							   JAVA

*************************************************************************

Java : Application oriented 
C : Hardware oriented.
C++ : Mix of two


Linux - OS based on c
Apps in Linux- Based on JAVA as well

JavaSE- (Standard Edition) covers basic oops, strings, exception handling, collections.
JavaEE - (Enterprise Edition) JSP, Servlets, java Beans
JavaME - (Micro Edition) Mobbile App Developments.

Features/ Buzzwords of Java:
Object oriented
platform Independent
Architecture Neutral
Secure
Robust

Object oriented: Has concepts of oops.
Platform Independent:(compile in one platform and execute in any other platform).
Architecture Neutral: For any arch, the datatype size and so on do not change.
(integer datatype of java takes 4 bytes irrespectice of 16bit and 32bit computers)
Secure: You cannot create pointers and acess memory.(Java program runs in sandbox mood)
Robust - Active memory management(Garbage collector)

What java doesn't have?
Explicit usage of pointers
Multiple inheritance.
destructors
operator Overloading (User defined operator overloading for objects)
Structures
Unions
goto and label statements
default arguments for functions
Call by address and call by reference
Virtual keyword.

Java is compiled and interpreted.
Programs are written in files with extensions of java. (Source code)
When compiled these files are converted to extension of class.(Byte code)
Hello.java->Hello.class 

Java compiler - compiles java files into class files.
JIT compiler - compiles class files into machine language code.
JIT only compiles certain methods which are called more than a threshold amount of time.
Else, they are interpreted.

JVM (Java Virtual Machine) - helps to run java programs.(Virtual machine within which we can run programs)
JRE (Java runtime Environment) = JVM + Runtime libraries
JDK(Java development Kit)= JRE + Development Tools.


