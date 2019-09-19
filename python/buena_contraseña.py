def anlaisis_contrasena(contrasena):
    simbolos = ['|', '@', '$', '%', '&', '\ ', '{', '}', '#', '?', '^', '*']
    flag_simbolo = False
    flag_minuscula = False
    flag_mayus = False
    seguridad = 0
    for i in range(0,len(contrasena)):
        end = 0
        mayus_counter = 65
        minus_counter = 97
        while flag_simbolo == False and end < len(simbolos):
            if contrasena[i] == simbolos[end]:
                flag_simbolo = True
                seguridad += 1
            else:
                end += 1
        while flag_mayus == False and mayus_counter < 91:
            if ord(contrasena[i]) == mayus_counter:
                flag_mayus = True
                seguridad +=1
            else:
                flag_mayus += 1
        while flag_minuscula == False and minus_counter < 123:
            if ord(contrasena[i]) == minus_counter:
                minus_counter = True
                seguridad += 1
            else:
                minus_counter += 1
    
    return(seguridad)

def main():
    password = input("Ingresa contrasena ")
    seguridad = anlaisis_contrasena(password)
    if seguridad == 3:
        print("Es segura")
    elif seguridad == 2:
        print("Seguridad media")
    elif seguridad == 1:
        print("Seguridad baja")
    else:
        print("No es segura")

main()
