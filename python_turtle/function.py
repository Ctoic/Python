def triangle(n):
    if(n%2 ==0):

        for i in range(1):
            for j in range(n):
                print(j*"*")
    else:
        while(n>0):
            for k in range(5):
                print(k*"*")
                n = n-1
                
n = int(input("Enter number "))
triangle(n)