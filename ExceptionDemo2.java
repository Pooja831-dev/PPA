import java.util.Scanner;

class ExceptionDemo2
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0, Ans = 0;

        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10,20,30,40,50};

        int index = 0;

        System.out.println("Enter the index :");
        index = sobj.nextInt();

        System.out.println("Value at the given index is :"+Arr[index]);
    }
}