def escaleras(altura, arreglo):
    total_combinaciones = 0
    if altura == 0:
        #print("termina ciclo, altura = 0")
        return 1
    if altura < 0:
        #print("termina cilco altura < 0")
        return 0
    for i in range(len(arreglo)):
        
        total_combinaciones += escaleras(altura - arreglo[i],arreglo)
        #print(altura,copia_altura,total_combinaciones)
    #print("total combinaciones: ",total_combinaciones)
    return total_combinaciones
    
arreglo = []
continuar = ['s']
altura = input("Cuantos escalones hay en la escalesa: ")
while(continuar[0] == 's'):

    var = input("Escalones por paso: ")
    arreglo.append(int (var))
    continuar[0] = input("agregar otro: [s/n] ") 
print("combinaciones totales: ",escaleras(int(altura),arreglo))

