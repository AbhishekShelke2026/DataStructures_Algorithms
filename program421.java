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

class Stack
{
    public node First;
    public int iCount;

    public Stack()
    {
        System.out.println("object of stack is created:");

        First = null;
        iCount = 0;
    }

    public void Push(int No)
    {
        node newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;

    }

    public int Pop()
    {
        int value = 0;

        if(First == null)
        {
            System.out.println("Stack is empty");
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
        System.out.println("elements of stack are");

        node temp = First;

        while(temp != null)
        {
            System.out.println(temp.data);
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
        Stack obj = new Stack();
        int iRet = 0;

        obj.Push(10);
        obj.Push(20);
        obj.Push(30);
        obj.Push(40);

        obj.Display();
        iRet = obj.Pop();
        System.out.println("poped element in stack are : "+iRet);

        obj.Display();
    }
}