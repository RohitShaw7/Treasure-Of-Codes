n = int(input("Enter the number to calculate factorial :")) #user input
fact = 1 #counter intialization
for i in range(2,n+1): #iteration from 2 to n
    fact = fact * i #calulation of factorial
print("Factorial = ",fact) #printing the factorial