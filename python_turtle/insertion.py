# insertion sort 
# 2016-05-27	PV

#insertion sort
def insertion_sort(a , order):
    for i in range(1, len(a)):
        if order == "A":
            for j in range(i, 0, -1):
                if a[j] < a[j-1]:
                    a[j], a[j-1] = a[j-1], a[j]
                else:
                    break
        else:
            for j in range(i, 0, -1):
                if a[j] > a[j-1]:
                    a[j], a[j-1] = a[j-1], a[j]
                else:
                    break
    return a

order  = input("Enter for ascending or desecnding")

lis = [3,4,5,1]
print(insertion_sort(lis,order))
