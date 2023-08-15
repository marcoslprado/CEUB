# Programa com utilização de erros para não levar ao mal funcionamento do mesmo #

x = int(input("Digite um número para x: "))
y = int(input("Digite um número para y: "))
try:
    z = x / y
    print(z)
except:
    print("Não é possível dividir por zero") # Mensagem de erro #

