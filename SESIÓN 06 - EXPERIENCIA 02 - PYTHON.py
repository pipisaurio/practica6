class Circulo:
    def __init__(self, radio):
        self.__radio = radio
        self.__diametro = 2*radio 

    def get_radio(self):
        return self.__radio
    
#función amiga
def calcular_area(circulo):
    return 3.14159 * circulo.get_radio() ** 2

#main
opc="S"
while opc=="S" or opc=="s":
    radio = int(input("INGRESE EL RADIO DEL CÍRCULO: "))
    circulo = Circulo(radio)
    print("El área del círculo es:", calcular_area(circulo))
    opc = input("¿Desea continuar? S/N: ")
