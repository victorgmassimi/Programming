class Rectangulo:
    def __init__(self,base,altura):
        self.base = b
        self.altura = h
    
    def get_area(self):
        return self.base * self.altura
    
    def get_perimetro(self):
        return (2 * self.base) + (2 * self.altura)

class fecha:
    def __init__(self, day, month, year):
        self.day = dd
        self.month = mm
        self.year = yyyy

    def get_semana_siguiente(self):
        self.day += 7
        if self.day > 30:
            self.month += 1
            self.day -= 30
            if self.month > 12:
                self.year += 1
                self.month -= 30
        return (self)
    def get_mes_siguiente(self):
        self.day +=1
        if self.month > 12:
                self.year += 1
                self.month -= 30
        return(self)

class 
