
import java.util.*;

class hello
{

    public static void main(String Arg[])
    {
        System.out.println("Enter the Data");
        Scanner sobj = new Scanner(System.in);

        String A = sobj.nextLine();

        //char Arr[]= new char [A];

        System.out.println(A);
        System.out.println(A.charAt(0));
        

        int iCnt = 0;

        for(iCnt = 0; iCnt<A.length; iCnt++ )
        {
            System.out.println(A.charAt(iCnt));
        }
    }
    



}