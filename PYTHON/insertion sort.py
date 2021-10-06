L = [2,3,4,7,10,1]

n = len(L)
for i in range(n):
    j i-1
    k = L[i]
    while j >= 0 and k < L[j]:
        L[j+1] = L[j]
        j = j-1
    else :
        L[j+1] = k
print(L)
