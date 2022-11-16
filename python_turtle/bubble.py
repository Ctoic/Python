def bubblesort(lista,order):
    for i in range(len(lista)):
        for h in range(len(lista)):
            if order == "A":

                if lista[i] < lista[h]:
                    temp = lista[i]
                    lista[i] = lista[h]
                    lista[h] = temp 
                else:
                    continue
            else:
                if lista[i] > lista[h]:
                    temp = lista[i]
                    lista[i] = lista[h]
                    lista[h] = temp 
                else:
                    continue

    return lista

lis = [3,4,5,1]
order = input("Enter for ascending or desecnding")

sorted_list = bubblesort(lis,order)
print(sorted_list)