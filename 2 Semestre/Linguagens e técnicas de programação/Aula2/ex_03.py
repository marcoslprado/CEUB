from random import randint
n = int(input("Digite N: "))
total = 0
i = 1
while i <= n:
    x = randint(1,50)
    print(f"valor {i} valor gerado {x}")
    total+=x
    i+=1
print(f"\nSoma dos valores gerados = {total}")
# Exercício anterior porem usando .format #

# from random import randint
# n = int(input("Digite N: "))
# total = 0 
# i = 1
# while i <= n :
#     x = randint(0, 100)
#     print("valor {} valor gerado {}"
#           .format(i,x))
#     total = total + x 
#     i += 1 
# print ("\nSoma dos valores gerados = {}" 
#        .format(total))