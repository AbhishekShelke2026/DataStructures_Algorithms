
class node
{
    public int data;
    public node next;
}

class SinglyLL
{
    public node First;
    public int iCount;

    public SinglyLL()
    {
        System.out.println("objet of SinglyLL gets creates successfully");
        First = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node();

        newn.data = No;
        newn.next = null;

        if (First == null)
        {
            First = newn;
        }
        else
        {
            newn . next = First;
            First = newn;
        }
        iCount++;
    }

    public void Display()
    {
        System.out.println("Elements of ll are:");

        node temp = First;

        while(temp != null)
        {
            System.out.print("|" +temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");

    }

}


class program406
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

    }
}