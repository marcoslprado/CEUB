# Programa que faz o produto dos elementos da lista com uma função recursiva #

list = [3,1,4,5]

def multiplyElementsOfAList(list):
    if len(list) == 0:
        return 1
    else:
        return(list[0] * multiplyElementsOfAList(list[1:]))

print(multiplyElementsOfAList(list))