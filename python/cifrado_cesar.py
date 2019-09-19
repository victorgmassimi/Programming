def cifrado(cadena, numero):
    cadena_cifrada = []
    ascii_cadena = list(cadena)
    for i in range (0,len(cadena)):
        ascii_cadena[i] = ord(cadena[i])
        ascii_cadena[i] += numero
        cadena_cifrada.append(chr(ascii_cadena[i]))
    return cadena_cifrada
def main():
    cadena = input("ingresa mensaje: ")
    numero = int(input("ingresa numero para cifrar: "))
    cadena_cifrada = cifrado(cadena,numero)
    print("el mensaje cifrado es: ",''.join(cadena_cifrada))

main()