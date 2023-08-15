nota = []
nome = []
def lenotanome():
    x = int(input("Digite a quantidade de alunos: "))
    for i in range(x):
        print("aluno {}" .format(i))
        try:
            n = float(input("Digite a nota do aluno: "))
        except:
            print("Nota deve ser sempre um número")
            i -= 1
            continue
        m = input("Digite o nome do aluno: ")
        nota.append(n)
        nome.append(m)

def avalianotas():
    for i in range(len(nome)):
        if nota[i] >= 9.0 and nota[i] <= 10:
            print("O aluno {} tem conceito A e Nota {}" .format(nome[i], nota[i]))
        if nota[i] < 9.0 and nota[i] >= 8.0:
            print("O aluno {} tem conceito B e Nota {}" .format(nome[i], nota[i]))
        if nota[i] < 8.0 and nota[i] >= 7.0:
            print("O aluno {} tem conceito C e Nota {}" .format(nome[i], nota[i]))

lenotanome()
avalianotas()
print(nome)
print(nota)