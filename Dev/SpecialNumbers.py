# Given two numbers, we need to determine the special number.
# A special number is one if it can be written as a sum of different non-negative powers of n.
#For eg: Given n=3, k=4,    bin(4)=100 1*3^2 + 0*3^1 + 0*3^0 = 9
#So, 9 is a special number for n=3

cases=int(input())
while cases>0:
    n=int(input())  #Take first number as input
    k=int(input())   #Take second number as input
    bin_k=bin(k)[2:]     #Binary of k
    sum=0
    for i in range(len(bin_k)):
        if bin_k[i]=='1':
            sum+=n**(len(bin_k)-i-1)
    final_sum=sum%(10**9+7)  #Calculate the special number
    print(final_sum)   #Print the special number


#Googled to remove b from binary representation of a number
#eg: bin(4)=0b100, we need to consider only 100 part