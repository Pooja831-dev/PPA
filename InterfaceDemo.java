interface RBI
{
    int TaxRate = 30;
    public float CalculatedIntrest();
}

class SBI implements RBI
{
    public float CalculatedIntrest()
    {
        return 7.5f;
    }

}
class BOM implements RBI
{
    public float CalculatedIntrest()
    {
        return 8.2f;
    }

}
class InterfaceDemo
{
    public static void main(String A[])
    {
      System.out.println("Tax Rate is :"+RBI.TaxRate);
      SBI sobj = new SBI();
      BOM bobj = new BOM();

      System.out.println("Intrest rate of SBI is :"+sobj.CalculatedIntrest());
      System.out.println("Intrest rate of BOM is:"+bobj.CalculatedIntrest());
    }
}