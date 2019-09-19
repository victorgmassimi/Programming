def es_palindromo(palabra):
    
    palindromo = []
    for x in range (0, len(palabra)):
        if palabra[x] != ' ':
            palindromo +=(palabra[x])
    tamano = len(palindromo)/2
    x = 0
    j = len(palindromo) -1
    flag = True
    while  x < tamano and flag == True:
        if palindromo[x] == palindromo[j]:
            x += 1
            j -= 1
        else:
            flag = False
    return(flag)

def main():
    palabra = input("ingresa palabra: ")
    respuesta = es_palindromo(palabra)
    if respuesta == True:
        print("Si es un palindromo")
    else:
        print("No es un palindromo")

main()
