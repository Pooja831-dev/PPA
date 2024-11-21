class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int x,y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class DerivedX extends Base
{
    public int P,Q;

    public DerivedX()
    {
        System.out.println("Inside DerivedX Constructor");
    }
    public void Sun()
    {
        System.out.println("Inside DerivedX Sun");
    }
}

class Hierarchallevel
{
    public static void main(String A[])
    {
             System.out.println("Inside Main Method");

             Derived dobj1 = new Derived();

             DerivedX dobj2 = new DerivedX();

             dobj1.Fun();
             dobj1.Gun();

             dobj2.Fun();
             dobj2.Sun();


    }
}
