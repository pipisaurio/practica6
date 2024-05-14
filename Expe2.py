import math

class Circulo:
    def __init__(self, radio):
        self.radio = radio
        self.diametro = 2 * radio

def calcular_area(circulo):
    area = math.pi * circulo.radio ** 2
    return area

if __name__ == "__main__":
    c1 = Circulo(5)

    area = calcular_area(c1)

    print("El área del círculo con radio", c1.radio, "es:", area)
