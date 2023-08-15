grades = []
students = []
x = 1 #Variável para usar na formatação dentro do input#
n = int(input("Digite a quantidade de alunos: "))
for i in range(n):
    grade = float(input(f"Digite a nota do {x}º aluno:"))
    student = input(f"Digite o nome do {x}º aluno: ")
    grades.append(grade)
    students.append(student)
    x+=1
x = 0
while x < n:
    if grades[x]>= 9:
        grades[x] = "A"
    elif grades[x] >= 8 and grades[x] < 9:
        grades[x] = "B"
    else:
        grades[x] = "C"
    print(f"Nota do {students[x]} = {grades[x]} ")
    x+=1