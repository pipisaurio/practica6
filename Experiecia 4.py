

class Vector2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector2D(self.x + other.x, self.y + other.y)

    def __sub__(self, other):
        return Vector2D(self.x - other.x, self.y - other.y)


vector1 = Vector2D(3, 1)
vector2 = Vector2D(1, 2)

suma_vector = vector1 + vector2
diferencia_vector = vector1 - vector2


print("Vector1:", vector1.x,"= x", vector1.y,"= y") 
print("Vector2:", vector2.x,"= x", vector2.y, "= y")  
print("Suma del  vector:", (suma_vector.x, suma_vector.y))  
print("Diferencia del vector:", (diferencia_vector.x, diferencia_vector.y))  
