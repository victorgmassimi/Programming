"""
def letras(longitud, cadena, let):

    if longitud == 0:
        print(cadena)
        return 1

    total = 0
    for i in range(len(let)):
        temp = cadena

        #string + 
        temp = temp + let[i]

        total = total + letras(longitud-1, temp, let)


    return total
#2, "", ["a","b","c","d"]
print(letras(2, "", ["a","b","c","d"]))
"""




def pasos(altura, combinaciones, arreglo):
    if altura <= 0:
        if altura == 0:
            return 1
        else:
            return 0
    
    for i in range(len(arreglo)):
        combinaciones += pasos(altura - arreglo[i],combinaciones,arreglo)


combinaciones = 0
array = [1,2]
print(pasos(5,combinaciones,array))

            
            
    
    