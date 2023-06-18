class Marvellous extends Thread
{
    int i = 0;
    public void run()
    {
        try
        {
           for(i = 0; i<10; i++)
           {
               System.out.println(i);
               Thread.sleep(1000);
           }
        }
        catch(Exception a)
        {

        }
    }
}


class Multi1
{
    public static void main(String Arg[]) throws Exception
    {
        Marvellous mobj1 = new Marvellous();
        Marvellous mobj2 = new Marvellous();

        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("End of main thread");

    }
}