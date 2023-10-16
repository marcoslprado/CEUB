# Import de funcao externa #
# No caso de outro arquivo #

from calculadora import * # Comando que importa todas as funcoes de calcuadora.py diretamente #
import sys # Import para sair do programa quando desejado
import time # Import para por delay no código #
import os #Import para limpar o terminal #

 # MENU

while True:
    print(f"--------CALCULADORA--------\n")
    print(f"1. Soma                    ")
    print(f"2. Subtração               ")
    print(f"3. Multiplicação           ")
    print(f"4. Divisão                 ")
    print(f"5. Sair                    ")
    print(f"---------------------------")
    
    try: # Tratamento de erro para não se digitar strings #
        x = int(input(f"Escolha uma opção: "))
    except:
        print("Você deve digitar um número de 1 a 5. Tente novamente")
        time.sleep(3)
        os.system('cls')
        continue

    # Caso o usuário queira sair do programa #

    if x == 5:
        print("Saindo do programa...")
        time.sleep(2)
        sys.exit()

    # Soma

    if x == 1:
        num1 = float(input("Digite o 1º número: "))
        num2 = float(input("Digite o 2º número: "))
        print("A soma desses 2 números é igual a: ", soma(num1,num2))
        time.sleep(3)
        os.system('cls')
        continue
    
    # Subtração 

    elif x == 2:
        num1 = float(input("Digite o 1º número: "))
        num2 = float(input("Digite o 2º número: "))
        print(f" {num1} - {num2} é igual a: ", subtracao(num1,num2))
        time.sleep(3)
        os.system('cls')
        continue

    # Multiplicação

    elif x == 3:
        num1 = float(input("Digite o 1º número: "))
        num2 = float(input("Digite o 2º número: "))
        print("O produto desses 2 números é igual a: ", multiplicacao(num1,num2))
        time.sleep(3)
        os.system('cls')
        continue

    # Divisão
    
    elif x == 4:
        num1 = float(input("Digite o 1º número: "))
        num2 = float(input("Digite o 2º número: "))
        if num2 == 0: # Tratamento de erro para não se dividir por zero #
            print("Não é possível dividir por zero. Insira outros números!") 
            num1 = float(input("Digite o 1º número: "))
            num2 = float(input("Digite o 2º número: "))
        print(f"{num1} dividido por {num2} é igual a: ", divisao(num1,num2))
        time.sleep(3)
        os.system('cls')
        continue
    else:
        print("Número inválido. Tente novamente")
        time.sleep(3)
        os.system('cls')



