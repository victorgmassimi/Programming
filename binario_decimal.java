import  java.util.Scanner;

public class binario_decimal
{
/*public static int convertir_bin_dec(char binario[], int decimal)
{
    
    return (decimal);
}*/

    public static void main(String[] args) 
    {

        Scanner input = new Scanner(System.in);
        System.out.print("ingresa un nuero en binario: ");
        String binario = input.next();
        int size = binario.length();
        char binario_chr[] = new char[size];
        int binario_int[] = new int[size];
        for(int j = 0;j<binario.length();j++)
        {
            binario_chr[j] = binario.charAt(j);
            binario_int[j] = (int)binario_chr[j];
        }
        
        
        
        
        int decimal = 0;
        int potencia = 0;
        for (int i = binario.length() -1 ; 0 < i; i--)
        {
            decimal += (binario_int[i] * Math.pow(2,potencia));
            potencia ++ ;
        }
        System.out.println("En decimal es: " + decimal);
    }
}