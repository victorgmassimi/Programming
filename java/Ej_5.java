import java.lang.Math;
import java.util.Scanner;


public class vector
{
    float x;
    float y;
    float z;


    def magnitud()
    {
        system.out.println("La magnitud es: " + Math.pow((x*x)+(y+y)+(z*z),.5));
    }
    def sumar(vector v)
    {
        system.out.println("La suma de los vectores es: (" + x+v.x +","+ y+v.y +","+ z+v.z+")" );
    }
    def productoPunto(vector v)
    {
        system.out.println("El producto punto es: " + ((x*v.x)+(y*v.y)+(z*v.z)));
    }
    def productoCruz(vector v)
    {   
        

    }
}



public class Ej_5
{

    vector v1;
    vector v2;
    
    v1.sumar(v2);
    v2.sumar(v1)

}