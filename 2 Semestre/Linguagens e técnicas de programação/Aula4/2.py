# Uma tupla pode armazenar mais de 1 tipo de dado de uma vez, como string e int na mesma, etc. #

# Dicionário #

aluno = {
    "1" : "Pedro",
    "2" : "Marcola",
    "3" : "Jonas",
    "4": "Henrique",
    "notas" : [8,9,7,1]
}
print(aluno.values()) # Imprime os valores das chaves #
print(aluno.keys()) # Imprime as chaves do dicionário #
print(f"O aluno {aluno['1']} tem nota {aluno['notas'][0]}") # Correlaciona um aluno com a nota correspondente na lista #
print(f"O aluno {aluno['2']} tem nota {aluno['notas'][1]}") # Correlaciona um aluno com a nota correspondente na lista #