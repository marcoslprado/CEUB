# Criar uma função que calcule a potência de um número

def potencia (a,b):
    i = 0
    result = 1
    while i < b:
        result = result * a
        i+=1
    return (result)
x = int(input("Digite a base: "))
y = int(input("Digite o expoente: "))
print(potencia(x,y))
