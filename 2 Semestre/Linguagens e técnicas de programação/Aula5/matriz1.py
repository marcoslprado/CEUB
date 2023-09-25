def Imprimediagonal(mat):
    for i in range(3):
        for j in range(3):
            if j == i:
                print(mat[i][j])

print(" m a t r i z")
m = [[1,2,3], [4,5,6], [7,8,9]]
print(m)
print(m[0], " = " , sum(m[0]))
print(m[1], " = " , sum(m[1]))
print(m[2], " = " , sum(m[2]))
print("Diagonal: ")
print(Imprimediagonal(m))