print("Welcome to the Average MPG Calculator")
print()
dash="-"*60
another_trip="Y"
odom=int(input("Please enter the starting odometer reading in miles:"))
start=odom #to store the starting odometer reading
fuel_consumed = 0 #to store the total fuel consumption
print()
print(dash)
leg=0
while another_trip.lower()=="y":
    while True:
        print("Please enter the new odometer reading in miles for leg #",(leg+1),":") #leg start with 1 so we have to do it (leg+1)
        odom1 = int(input())
        print("Please enter the fuel consumed in gallons for leg #",(leg+1),":")
        gallons = float(input())
        mpg = float((odom1-odom)/gallons)
        total_miles = odom + odom1
        if((odom1>odom) and (gallons>0)):
            #leg=0 This is to be removed from your code otherwise leg is getting intialized to 0 everytime the loops iterates
            leg+=1
            fuel_consumed = fuel_consumed+gallons #to have the summation of the whole fuel consumed
            print("MPG for leg #",leg,"=",mpg)
            odom = odom1 #to store the value of the last odometer
            break
        else:
            print("Fuel consumed needs to be positive and new odometer reading need to be higher than",float(odom))
            print(dash)
    another_trip=input("continue(Y/N)?")
    print(dash)
    if(another_trip.lower() != "y"): #if no
        print("Total number of legs in the journey: ",leg)
        print("Final average MPG for the entire journey: ",(odom1-start)/fuel_consumed) #calulation of average MPG
print('Bye!')