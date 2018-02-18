num=int(input("Enter a number : "))
f = 0
for i in range(2,int(num/2)):
    if (num%i == 0):
        f = 1
        break
if (f == 0):
    print("The number "+str(num)+" is prime")