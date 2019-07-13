import string
lw = list(string.ascii_lowercase)

l1 = list(input())
l2 = list(input())
l3 = []
for i in range(len(l1)):
    rw = lw.index(l1[i])+lw.index(l2[i])+1
    if rw < 25:
        print(lw[rw],end = "")
    else:
        print(lw[rw-26],end = "")
