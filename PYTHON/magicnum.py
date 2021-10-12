# Function to calculate the number of digits in a number
# Magic number: repeating the iteration till we are left with a single digit. If the digit left over is 1, then the original number is called a magic number.
# example Consider the number 55. The sum of the digits of 55 is (5+5) = 10. 
# The sum of the digits of 10 is (1+0) = 1. Since the process is terminating with 1 as the last single digit, 55 is considered to be a magic number. 
def digCount(num):
    c = 0
    while num != 0:
        num = num//10
        c += 1
    return c
#Function to calculate the sum of digits of a number
def digSum(num):
    temp = num
    sum = 0
    for i in range(digCount(num)):
        sum+=num%10
        num//=10
    return sum
#Function to check whether a number is a magic number or not
def magic_check(num):
    while(digCount(num)>1):
        num = digSum(num)
    if num == 1:
        return True
    else:
        return False
#Initialising a list with some numbers
numbers = [1234,12345,12,19, 55, 555] 
#you can give the custom input also
# for i in range(int(input()):
#      int(input()).append(numbers[i])
#Iterating over the list and using the magic_check function
for i in numbers:
    if(magic_check(i)):
        print(f"{i} IS a Magic Number")
    else:
        print(f"{i} IS NOT a Magic Number")
