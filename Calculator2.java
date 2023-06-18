import java.awt.*;
import java.awt.event.*;

class MarevellousCalculator extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button ADD,SUB,MULT,DIV;
    public TextField t1,t2;
    public Label lobj;
    public Integer No1,No2;

    public MarevellousCalculator(int width,int height, String title)
    {
        fobj = new Frame(title);
        fobj.setSize(width,height);
        

        fobj.addWindowListener(this);

        ADD = new Button("ADD");
        SUB = new Button("SUB");
        MULT = new Button("MULT");
        DIV = new Button("DIV");

        t1 = new TextField();
        t2 = new TextField();
        
        

        ADD.setBounds(50,300,100,75);
        SUB.setBounds(150,300,100,75);
        MULT.setBounds(250,300,100,75);
        DIV.setBounds(350,300,100,75);

        t1.setBounds(50,100,100,50);       //X Y W H
        t2.setBounds(150,100,100,50);
        

        fobj.add(ADD);
        fobj.add(SUB);
        fobj.add(MULT);
        fobj.add(DIV);

        fobj.add(t1);
        fobj.add(t2);
       

        lobj = new Label();
        lobj.setBounds(100,400,200,50);
        fobj.add(lobj);

        

        ADD.addActionListener(this);
        SUB.addActionListener(this);
        MULT.addActionListener(this);
        DIV.addActionListener(this);

        fobj.setLayout(null);
        fobj.setVisible(true);


    }


    public void windowClosing()
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj)
    {
        try
        {
            No1 = Integer.parseInt(t1.getText());
            No2 = Integer.parseInt(t2.getText());

            if(aobj.getSource()==ADD)
            {
                lobj.setText("Addition is : "+(No1+No2));
            }
            else if(aobj.getSource()==SUB)
            {
                lobj.setText("Substraction is : "+(No1-No2));
            }
            else if(aobj.getSource()==MULT)
            {
                lobj.setText("Multiplication is : "+(No1*No2));
            }
            else if(aobj.getSource()==DIV)
            {
                lobj.setText("Division is : "+(No1/No2));
            }

        }
        catch(Exception eobj)
        {

        }


    }


}

class Calculator2
{
    public static void main(String Arg[])
    {
        MarevellousCalculator mobj = new MarevellousCalculator(500,500,"Calculator");
    }
}
