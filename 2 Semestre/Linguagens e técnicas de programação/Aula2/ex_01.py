# Dada a lista abaixo, pede-se: #
# 1. Imprima os três últimos elementos #
# 2. Ordene a lista em crescente/decrescente #
# 3. Insere um elemento no início
L = [5,4,3,2,8,7,4,9]
print(L[5:])
# Sort é usado para ordenar a lista de forma crescente
L.sort()
print(L)
# Reverse inverte a lista, tornando-a decrescente #
L.reverse()
print(L)
# No insert você põe a posição que vc quer adicionar o elemento e o elemento que você quer adicionar
L.insert(0,71)
print(L)

#Tarefa de casa: Ordenar uma lista de forma crescente sem usar o sort. Pode ser pelo método bubblesort #