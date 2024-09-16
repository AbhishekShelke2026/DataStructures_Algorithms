class node
{
    public int data;
    public node next;
    public node prev;

    public node (int value)
    {
        data = value;
        next = null;
        prev = null;
    }
}

class DoublyCL
{
    public node First;
    public node Last;

    public int iCount;


    public DoublyCL()
    {
        System.out.println("object of DoublyCl gets created\n");

        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {

    }
    
    public void InsertLast(int No)
    {

    }

    public void Diaplay()
    {

    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {

    }

    public void DeleteLast()
    {

    }

    public void InsertAtPos(int No , int iPos)
    {

    }

    public void DeleteAtPos(int iPos)
    {

    }


}



class program416
{
    public static void main(String Arg[])
    {
        DoublyCL obj = new DoublyCL();
    }
}