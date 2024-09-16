class node
{
    public int data;
    public node next;

    public node(int value)
    {
        data = value;
        next = null;
    }
}

class Queue
{
    public node First;
    public int iCount;

    public Queue()
    {
        System.out.println("object of Queue is created:");

        First = null;
        iCount = 0;
    }

    public void EnQueue(int No)
    {
        node newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            node temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;

    }

    public int DeQueue()
    {
        int value = 0;

        if(First == null)
        {
            System.out.println("Queue is empty");
            return -1;
        }

        else
        {
            value = First.data;
            First = First.next;
        }
        iCount--;
        return value;

    }

    public void Display()
    {
        System.out.println("elements of Queue are");

        node temp = First;

        while(temp != null)
        {
            System.out.print(temp.data+"\t ");
            temp = temp.next;
        }

    }

    public int Count()
    {
        return iCount;
    }

}

class program421
{
    public static void main(String Arh[])
    {
        Queue obj = new Queue();
        int iRet = 0;

        obj.EnQueue(10);
        obj.EnQueue(20);
        obj.EnQueue(30);
        obj.EnQueue(40);

        obj.Display();
        iRet = obj.DeQueue();
        System.out.println("removed element in Queue are : "+iRet);

        obj.Display();
    }
}