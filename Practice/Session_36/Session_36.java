//Everything in java is within a class
//anything starting with uppercase in java is always class
//Static means we can access the function without creating the object.

/*
public class Session_36
{
  public static void main(String args[])
  {
    System.out.println("Hello Mr!");
  }
}
*/

/*
Datatypes in java (Default value=0)

Boolean  1 bit(0 means False)
char     2 bytes(Unicode-16 format UTF-16)
integer Datatypes
byte    1 byte
short   2 bytes
int     4 bytes
long    8 bytes
Float Datatypes
Float    4 bytes
Double   8 bytes
*/

/*
public class Session_36
{
  public static void main(String args[])
  {
    boolean a = false;
    System.out.println(a);
  }
}
//False
*/

/*
public class Session_36
{
  public static void main(String args[])
  {
    int a;
    System.out.println(a);
  }
}
//Error (a is not intialised)
*/

/*
public class Session_36
{
  public static void main(String args[])
  {
    byte a=10;
    System.out.println(a);
  }
}
//10
*/
/*
public class Session_36
{
  public static void main(String args[])
  {
    byte a=128;
    System.out.println(a);
  }
}
// error: incompatible types: possible lossy conversion from int to byte
//byte only takes 1 byte size
*/

/*
public class Session_36
{
  public static void main(String args[])
  {
    byte a=127;
    a++;
    System.out.println(a);
  }
}
//-128
*/

/*
public class Session_36
{
  public static void main(String args[])
  {
    float a=3.14;
    System.out.println(a);
  }
}
//error: incompatible types: possible lossy conversion from double to float
*/

/*
public class Session_36
{
  public static void main(String args[])
  {
    float a=3.14f;
    System.out.println(a);
  }
}
//3.14
*/
/*
Whenever converting from higher sized datatype to lower sized datatype, you
need to typecast it explicitly. Else, you'll always encounter lossy conversion error.
*/

/*
public class Session_36
{
  public static void main(String args[])
  {
    float a=(float)3.14;
    System.out.println(a);
  }
}
//3.14
*/
/*
public class Session_36
{
  public static void main(String args[])
  {
    byte a=(byte)128;
    System.out.println(a);
  }
}
//-128
*/

/*
OOPs within java:
Abstraction
Encapsulation
Inheritance
Polymorphism
*/

/*
class A {
  void basicFunction() {
    System.out.println("IN BASIC FUNCTION");
  }
}

public class Session_36
{
  public static void main(String args[])
  {
    A a1;
    a1=new A();
    a1.basicFunction();

  }
}
//IN BASIC FUNCTION
*/

/*
//Ananoymus object (without creating object we can access the class functions for once.)
class A {
  void basicFunction() {
    System.out.println("IN BASIC FUNCTION");
  }
}

public class Session_36
{
  public static void main(String args[])
  {
    new A().basicFunction();
  }
}
//IN BASIC FUNCTION
*/

/*
class A {
  A() {
    System.out.println("IN CONSTRUCTOR");
  }
}

public class Session_36
{
  public static void main(String args[])
  {
    A a1= new A();
  }
}
//IN CONSTRUCTOR
*/

/*
class A {
  int a;
  A(int x) {
    a=x;
    System.out.println("IN CONSTRUCTOR "+a);
  }
}

public class Session_36
{
  public static void main(String args[])
  {
    A a1= new A(10);
  }
}
//IN CONSTRUCTOR 10
*/

/*
Types Of CONSTRUCTOR in java:
Default CONSTRUCTOR
Parameterized CONSTRUCTOR
*/

/*
class A {
  int a;
  A() {
    System.out.println("Default");
  }
  A(int x) {
    System.out.println("Parameterized");
  }
}
public class Session_36
{
  public static void main(String args[])
  {
    A a1= new A();
    A a2= new A(25);
  }
}
//Default
//Parameterized
*/

/*
class A {
  int a;
  A() {
    System.out.println("Default");
  }
  A(int x) {
    System.out.println("Parameterized");
  }
  A(int x,int y,int z) {
    System.out.println("Parameterized 1");
  }
}
public class Session_36
{
  public static void main(String args[])
  {
    A a1= new A();
    A a2= new A(25);
    A a3= new A(25,10,20);
  }
}
op:
Default
Parameterized
Parameterized 1
*/

/*
class A {
  int a;
  A() {
    System.out.println("Default");
  }
  A(int x) {
    System.out.println("Parameterized");
  }
  A(int x,int y,int z=0) {
    System.out.println("Parameterized 1");
  }
}
public class Session_36
{
  public static void main(String args[])
  {
    A a1= new A();
    A a2= new A(25);
    A a3= new A(25,10);
  }
}
op:error // No default args in function calls in java.
*/

/*
Copy CONSTRUCTOR:
There is no copy CONSTRUCTOR.
However you can copy in the following ways:
Use a CONSTRUCTOR to copy an entire object to another object
copy field by field manually.
use clone() method
*/

/*
class A {
  int a;
  int b;
  A(int x, int y) {
    a=x;
    b=y;
  }
  A(A object) {
    a= object.a;
    b= object.b;
  }
}
public class Session_36
{
  public static void main(String args[])
  {
    A a1= new A(10,20);
    A a2= new A(a1);
    System.out.println(a2.a+" "+a2.b);
  }
}
//10 20
*/

/*
class A implements Cloneable{
  int a;
  A() {
    System.out.println("In Constructor");
  }
  public Object clone() throws CloneNotSupportedException{
    return super.clone();
  }
}
public class Session_36
{
  public static void main(String args[]) throws CloneNotSupportedException
  {
    A a1= new A();
    a1.a =50;
    A a2 = (A)a1.clone();
    System.out.println(a2.a);
  }
}
op:
In Constructor
50
*/
