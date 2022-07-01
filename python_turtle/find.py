#make sum function for list
def sum(list):
    sum = 0
    for i in list:
        sum += i
    return sum
#make average function for list
def average(list):
    sum = 0
    for i in list:
        sum += i
    return sum/len(list)
#make median function for list
def median(list):
    list.sort()
    if len(list)%2 == 0:
        return (list[int(len(list)/2)] + list[int(len(list)/2)-1])/2
    else:
        return list[int(len(list)/2)]
#make mode function for list
def mode(list):
    count = {}
    for i in list:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
    max = 0
    for i in count:
        if count[i] > max:
            max = count[i]
            mode = i
    return mode

list = [1,2,3,4,5,6,7,8,9,10]
print(sum(list))
print(average(list))
print(median(list))
print(mode(list))