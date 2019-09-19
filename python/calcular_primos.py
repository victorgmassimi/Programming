
def esPrimo(x):
    primo = True
    if (x % 2 != 0 ):
        a = 3
        while (a < (x/2) and (primo == True)):
            if (x % a == 0):
                primo = False
            else:
                a += 1
    return (primo)

def main():
    a = int (input("Ingresa un numero "))
    primo = esPrimo(a)
    if primo:
        print(a, "Es primo")
    else:
        print(a, "No es primo")

main()
    