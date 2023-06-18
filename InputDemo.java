import java.io.*;

class InputDemo
{
    public static void main(String Arg[]) throws IOException
    {
        int No1 = 0; 
        int No2 = 0;
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
       
        try
        {

            System.out.println("Enter the first number :");
            int No1 = Integer.parseInt(bobj.readLine());

            System.out.println("Enter the second number :");
            int No2 = Integer.parseInt(bobj.readLine());
        }
        catch(IOException obj)
        {

        }

        int Ans = No1 + No2;

        System.out.println("Addition is :" +Ans);


    }
}