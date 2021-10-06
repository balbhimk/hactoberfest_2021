lst = [12,4,1,3,6,9,10]
n = len(lst)
for i in range(n):
    for j in range(n-i-1):
        if lst[j] > lst[j+1]:
            lst[j] , lst[j+1] = lst[j+1] , lst[j]
        else :
            continue
    print(lst)
print(lst)
