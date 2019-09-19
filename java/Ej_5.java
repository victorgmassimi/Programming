import java.lang.Math;
import java.util.Scanner;


public class vector
{
    float x;
    float y;
    float z;


    def magnitud()
    {
        return (Math.pow((x*x)+(y+y)+(z*z),.5));
    }
    def sumar(vector v)
    {
        vector nuevoVector = new vector();
        nuevoVector.x = x + v.x;
        nuevoVector.y = y + v.y;
        nuevoVector.z = z + v.z;
        return nuevoVector;
    }
    def productoPunto(vector v)
    {
        vector nuevoVector = new vector();
        nuevoVector.x = x * v.x;
        nuevoVector.y = y * v.y;
        nuevoVector.z = z * v.z;
        return nuevoVector;
    }
    def productoCruz(vector v)
    {   
        vector nuevoVector = new vector();
        nuevoVector.x = (y * v.z - z * v.y);
        nuevoVector.y = (x * v.z - z * v.x);
        nuevoVector.z = (x * v.y - y * v.x);
        return nuevoVector;
    }
    def imprimirVector()
    {
        System.out.println("vector: (" + x + "," + y + "," + z + ')');
    }
}
public class punto
{
    float x;
    float y;

    def distanciaPunto(punto p)
    {
        punto nuevoPunto = new punto();
        nuevoPunto.x = Math.sqrt(Math.pow(x - p.x,2));
        nuevoPunto.y = Math.sqrt(Math.pow(y - p.y,2));
        return nuevoPunto;
    }
    def putnoMedio(punto p)
    {
        punto nuevoPunto = new punto();
        nuevoPunto = nuevoPunto.distanciaPunto(p);
        nuevoPunto.x = nuevoPunto.x / 2;
        nuevoPunto.y = nuevoPunto.y / 2;
        return nuevoPunto;
    }
}



public class Ej_5
{
    public static main()
    {


    }

    

}