
/*
class Bye
{
void fun()
{
  System.out.println("Bye");
}

}

public class July16
{
  public static void main(String args[])
  {
    //System.out.println("Hello world\n");
    new Bye().fun(); //Anonymous Object
    Bye b= new Bye();
    b.fun();// Named object
  }
}
//Bye
//Bye
*/

/*
class Bye
{
Bye()
{
  System.out.println("Bye");
}
~Bye()
{
  System.out.println("Bye");
}


}

public class July16
{
  public static void main(String args[])
  {
    Bye b= new Bye();
  }
}
//error: illegal start of type
*/

/*
public class July16
{
  static {System.out.println("Hello\n");}
  public static void main(String args[])
  {
    System.out.println("Nikhyaa-Rupali\n");
  }
  static {System.out.println("world\n");}
}
op:
Hello
world
Nikhyaa-Rupali
*/

/*
abstract class Base
{
  void fun() {  }
  abstract void display();
}
class Derived extends Base
{
  //must implement any abstract functions in its parent class.
}
public class July16
{

  public static void main(String args[])
  {
    System.out.println("Nikhyaa-Rupali\n");
  }
}*/

/*
 interface Base
{
  int a=5;
  void fun();
}
class Derived implements Base
{
  //must implement any abstract functions in its parent class.
}
public class July16
{

  public static void main(String args[])
  {
    System.out.println("Nikhyaa-Rupali\n");
  }
}
*/

/*
class thr extends Thread
{
  public void run()
  {
    System.out.println("Nikhyaa-Rupali\n");
  }
}
public class July16
{

  public static void main(String args[])
  {
    thr a=new thr();
    a.start();
  }
}
//Nikhyaa-Rupali
*/
