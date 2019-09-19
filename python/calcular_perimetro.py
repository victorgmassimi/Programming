def distancia_puntos(x1, y1, x2, y2):
    distancia = ((x2-x1)**2 + (y2-y1)**2)**(0.5)
    return distancia


def perimetro(x1 ,y1, x2, y2, x3, y3, x4, y4, x5, y5):
    punto_x = [x1,x2,x3,x4,x5]
    punto_y = [y1,y2,y3,y4,y5]
    for i in range(0,4):
    
        perimetro += (distancia_puntos(punto_x[i],punto_y[i],punto_x[(i+1)],punto_y[(i+1)]))
    perimetro += distancia_puntos(x1,y1,x5,y5)
    print(perimetro)


print("Ingresa las coordenadas de los puntos de una por una.")
puntos = []
for x in range(10):
    
    puntos.append(int(input()))

perimetro(puntos[0],puntos[1],puntos[2],puntos[3],puntos[4],puntos[5],puntos[6],puntos[7],puntos[8],puntos[9])

