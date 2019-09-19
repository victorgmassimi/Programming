def suma():
    num_1 = input("ingresa el primer valor a sumar: ")
    num_2 = input("ingresa el siguiente valor a sumar: ")
    return(num_1 + num_2)

def resta():
    num_1 = input("ingresa el primer valor de la resta: ")
    num_2 = input("ingresa el siguiete valor de la resta: ")
    return(num_1 - num_2)

operacion = input("que operacion quiere realizar suma = 1 resta = 2: ")
print(operacion)
if operacion == 1:
    print(suma())
    
if(operacion == 2):
    print(resta())
    
else:
    print("opcion invalida")
