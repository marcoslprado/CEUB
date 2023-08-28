# Programa que soma os elementos de uma lista usando função recursiva #
resultado = 0
list = [2,0,1,5,7,8,6]
i = 0

def soma(resultado, list, i):
    if i > 6:
        return resultado
    else:
        resultado += list[i]
        i+=1
        return soma(resultado, list, i)

print("A soma dos elementos da lista é igual a ", soma(resultado, list, i))


    
