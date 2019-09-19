import java.util.Scanner;
public class test
{
    public static void main(String[] args) 
    
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Ingresa un string: ");
        /*int numero[] = {5,3,1};
        for (int i=0;i<3;i++)
        {
            System.out.println(numero[i]);
        }*/

        String string = input.next();
        System.out.println(string);
        char string_arr[] = new char[5];
        for (int i = 0; i<string.length();i++)
        {   
            string_arr[i] = string.charAt(i);
            
        }
        System.out.println(string_arr);
    }   
}