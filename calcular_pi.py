def caluclarPi(n):
    pi = float (0)
    signo = 1
    divisor = 2
    for x in range (0,n):
        pi = pi + (signo * (4 / (divisor * (divisor + 1) * (divisor + 2))))
        divisor += 2
        signo = signo * (-1)
    pi = pi + 3
    print(pi)


n = int (input("ingresa un valor: "))
caluclarPi(n)