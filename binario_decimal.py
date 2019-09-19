def binario_decimal(binario):
    potencia = 0
    decimal = 0
    i = len(binario)-1
    for i in range(i,-1,-1):
        apoyo = int(binario[i])

        print("apoyo",apoyo)
        decimal += apoyo*(2**potencia)
        print("Decimal",decimal)
        potencia += 1
    return (decimal)

def main():
    binary = input("ingresa un numero en binario: ")
    decimal = binario_decimal(binary)
    print("El numero ",binary, "es: ",decimal, "en decimal.")

main()