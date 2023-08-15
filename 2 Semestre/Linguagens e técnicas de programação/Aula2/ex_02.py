# Nota >= 9 == A; Nota >=8 e <9 == B; Nota >= 7 e < 8 == C
aluno_x = input("Digite o nome do 1º aluno: ")
nota_x = float(input("Digite a nota desse aluno: "))
aluno_y = input("Digite o nome do 2º aluno: ")
nota_y = float(input("Digite a nota desse aluno: ")) 
aluno_z = input("Digite o nome do 3º aluno: ")
nota_z = float(input("Digite a nota desse aluno: ")) 
if nota_x >= 9:
    nota_x = "A"
elif nota_x >= 8 and nota_x < 9:
    nota_x = "B"
else:
    nota_x = "C"
if nota_y >= 9:
    nota_y = "A"
elif nota_y >= 8 and nota_y < 9:
    nota_y = "B"
else:
    nota_y = "C"
if nota_z >= 9:
    nota_z = "A"
elif nota_z >= 8 and nota_z < 9:
    nota_z = "B"
else:
    nota_z = "C"
print("Nota final", aluno_x , ": ", nota_x)
print("Nota final", aluno_y , ": ", nota_y)
print("Nota final", aluno_z , ": ", nota_z)