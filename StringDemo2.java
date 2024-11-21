
class StringDemo2
{
    public static void main(String A[])
    {
        StringBuffer s1 = new StringBuffer("Marvellous");
        StringBuilder s2 = new StringBuilder("Marvellous");

        s1.append("Infosystem");
          
        s2.append("Class");

        System.out.println(s1);
        System.out.println(s2);

    }
}