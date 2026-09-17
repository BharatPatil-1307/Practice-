import java.util.Scanner;

public class Program5 
{
    public static void main(String[] args) 
    {
        int i = 1;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the table :");
        int x = sobj.nextInt();
        sobj.close();
        while(i <= 10)
        {
            System.out.println(x +" x "+i +" = "+ i * x);
            i++;
        }        
    }    
}
