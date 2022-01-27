A = int(input("Enter A : ")) #user input A
B = int(input("Enter B : ")) #user input B
flag=0 #counter to check if any of A's or B's condition is satisfied
if(A>0 and (A%2)==0): #checking the condition of A
    print("Even numbers between 600 to 150")
    flag=1
    for i in range(600,151,-1): #range(x,y,z) provides a sequence of number from x to y-1, where z acts as the decrement operator
        if((i%2)==0): #checking even
            print(i)
print() #for a new line
if(B<0 and (B%2)!=0): #checking the condition of B
    print("Odd numbers between 625 to 125")
    flag=1
    for i in range(625,126,-1): 
        if((i%2)!=0): #checking odd
            print(i)
if(flag==0):
    print("Number equal to 0")