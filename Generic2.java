

class Generic2
{
    public static <T> void Display(T Arr[])
    {
        for(T no : Arr)       //foreach loop
        {
            System.out.println(no);
        }

        // for(int i = 0; i < Arr.length; i++)
        // {
        //     Sysytem.out.println(i);
        // }
    }

    public static void main(String Arg[])
    {
        Integer A[] = {10,20,30,40};
        Float B[] = {50.49f,60.64f,70.74f,74.74f};
        Double C[] = {50.44,60.65,70.64};

        Display(A);
        Display(B);
        Display(C);

        
    }


}