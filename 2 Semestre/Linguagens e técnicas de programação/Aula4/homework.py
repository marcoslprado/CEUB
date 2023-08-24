 # Programa que insere elementos em uma lista usando função recursiva #
def IncreaseOnList(i,y,list): # Função recursiva que insere elementos na lista chamando ela mesma de acordo com o nº de elementos que o usuário deseja inserir #
    while i < y:
        try:
            x = int(input(f"Digite o {i+1}º número a ser inserido na lista: "))
            i+=1
            list.append(x)
            IncreaseOnList(i,y,list)
        except:
            print("Você deve digitar um número.\n")
            print("=======================================\n")
            IncreaseOnList(i,y,list)
        return list
list = []
i = 0
boolean = True
while boolean: # Loop para utilização de tratamento de erro
    try:
        y = int(input("Quantos números você deseja incluir na lista? "))
        boolean = False
    except:
        print("Você deve digitar um número maior que zero.")
        print("=======================================\n")
print("Sua lista resultante é: ",IncreaseOnList(i,y,list))