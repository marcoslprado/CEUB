# Método de ordenação sem utilizar sort #
list = [3,6,1,8,2,6,4,9]
troquei = 1
while troquei == 1:
    i = 0
    troquei = 0
    while i < 7:
        if list[i] > list[i+1]:
            list[i], list[i+1] = list[i+1], list[i]
            troquei = 1
        i+=1
print(list)
