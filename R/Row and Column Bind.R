v<-c(1,2,3,4) # Create a vector v having 4 elements
w<-c(5,6,7,8) # Create a vector w having 4 elements
x<-c(9,10,11,12) # Create a vector x having 4 elements
y<-c(13,14,15,16) # Create a vector y having 4 elements
z<-c(17,18,19,20) # Create a vector z having 4 elements
A<-rbind(v,w,x,y,z) # Create a matrix A with the five vectors
print(A)

colnames(A)<-c("a","b","c","d") # Change the colnames of A to a, b, c and d