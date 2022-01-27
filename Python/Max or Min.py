def maximum(a,b): #maximum function
    if a>b:
        return a
    else:
        return b
        
def minimum(a,b): #minimum function
    if a>b:
        return b
    else:
        return a

print("1) To compare two integers") 
print("2) To compare two doubles")
print("3) To compare two strings")
x = int(input()) #asking for input of the types of the twow arguments
if(x==1): #if integer arguments
    print("Enter first integer:")
    a = int(input())
    print("Enter second integer:")
    b = int(input())
elif(x==2): #if double arguments
    print("Enter first double:")
    a = float(input())
    print("Enter second double:")
    b = float(input())
elif(x==3): #if string arguments
    print("Enter first string:")
    a = input()
    print("Enter second string:")
    b = input()
else:
    print("Wrong choice") 
    
print("1) To find the minimum")
print("2) To find the maximum")
x = int(input()) #asking for the input to find maximum/minimum
if x == 1:
    print(minimum(a,b))
elif x == 2:
    print(maximum(a,b))
else:
    print("Wrong option")