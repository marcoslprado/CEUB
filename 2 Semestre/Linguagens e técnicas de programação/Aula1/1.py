list = [2,856,1,6,8,902,15,-8,2,8]
maior = -9999999999999999999
menor = 99999999999999999999
x = 0
while x < len(list):
    if list[x] < menor:
        menor = list[x]
    if list[x] > maior:
        maior = list[x]
    x+=1
print("Maior: ", maior, " Menor: ", menor)