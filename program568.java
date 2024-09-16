import java.util.*;


class Matrix
{


}

class program568
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter No. of Rows :");
        int No1  = sobj.nextInt();

        System.out.println("Enter the Number of Column :");
        int No2 = sobj.nextInt();

        int Arr[] [] = new int [No1] [No2];

        System.out.println("Please enter the data :");

        int i = 0 , j = 0;

        for(i = 0; i < No1; i++)
        {
            for(j = 0; j < No2; j++)
            {
                Arr [i] [j] = sobj.nextInt();
            }
        }

        System.out.println("Elements From the Matrix :");
        for(i = 0; i < No1; i++)
        {
            for(j = 0; j < No2; j++)
            {
                System.out.print(Arr[i] [j] + "\t");
            }
            System.out.println();
        }

    }
}