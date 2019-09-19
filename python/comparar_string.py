string_1 = input("Ingresa un string: ")
string_2 = input("Ingresa segundo string: ")
i = 0
igualdad = 0
if (len(string_1) > len(string_2)):
    tamano = len(string_1)
else:
    tamano = len(string_2)

while ((i < tamano) & (igualdad == 0)):
    if (string_1[i] == string_2[i]):
        i += 1
    else:
        igualdad = 1
if (igualdad == 0):
    print("Verdadero")
else:
    print("Falso")