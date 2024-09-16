
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
            System.out.print("| " +temp.data+"|-> ");
            temp = temp.next;
        }
        System.out.println("null");

    }

    public void InsertLast(int No)
    {
        node newn = null;

        node temp = null;

        newn = new node();
        newn.data = No;
        newn.next = null;

        if (First == null)
        {
            First = newn;
        }
        else
        {
            temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            
        }
        iCount++;
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if (First == null)
        {
            System.out.println("LL is empty");
            return ;
        }

        else
        {
            First = First.next;
            
        }
        iCount--;
    }

    public void DeleteLast()
    {
        if (First == null)
        {
            System.out.println("LL is empty");
            return ;
        }

        else if (First .next == null)
        {
            First = null;
        }

        else
        {
            node temp = First;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
            
        }
        iCount--;
    }

}


class program412
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();
        int iRet = 0;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        iRet = obj.Count();
        System.out.println("Number of elements are :"+iRet);
        obj.Display();


        obj.DeleteFirst();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are :"+iRet);
        


        obj.DeleteLast();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are :"+iRet);
        

        




    }
}