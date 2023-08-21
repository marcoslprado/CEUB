# Programa que calcula potência com tratamento de erro no caso de o usuário não digitar um número #
# Utilizamos pow para calcular potência em Python #

def potencia (x,y): # Função que calcula a potência
    return (pow(x,y))
while True:
    try:
        x = int(input("Digite a base: "))
        y = int(input("Digite o expoente: "))
        break
    except: # No caso de erro, essa mensagem será exibida e o usuário tentará inserir números novamente por conta do while #
        print("Você deve digitar números.")
print(potencia(x,y))