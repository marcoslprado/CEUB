#  Programa que soma os elementos de uma lista utilizando função recursiva #
# Declaração de variáveis #
list = [] 

def createList(): # Função que insere elementos na lista #
    try: # Tratamento de erro #
        x = float(input("Digite o número que você deseja inserir na lista: (Para parar de inserir digite 0) "))
        if x == 0: # Quando o usuário digitar 0, encerra a função #
            return
        list.append(x) # Adiciona o número digitado à lista #
        createList()
    except:
        print("Você deve digitar um número. Tente novamente")
        createList()

createList()
print("O resultado da soma dos elementos da lista é: ", sum(list))
