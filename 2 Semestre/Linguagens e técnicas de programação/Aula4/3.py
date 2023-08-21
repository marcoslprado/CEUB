# Função recursiva #

def fatorial(n):
    if n==1:
        return 1
    return (n * fatorial(n-1)) # Nessa linha chama-se a função novamente #

def imprime(n,w):
    print(f"O fatorial de {n} é {w}")
def ledado():
    s = int(input("Digite um número: "))
    return(s)

k = ledado()
z = fatorial(k)
imprime(k,z)