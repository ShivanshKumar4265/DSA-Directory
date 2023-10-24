a=45
# This whole will be taken as a ladder and only one value will be printed among all the condition.
if(a>3):
    print("The value is greater than 3")
elif(a>7):
    print("The value of a is greater than 7")
else:
    print("The value is not greater than 3 or 7.")
print("Done")
    

# We can use multiple if statement if we have to print more than 1 lines.
if(a<3):
    print("The value of a is greater than 3.")
if(a>13):
    print("The value of a is greater than 13.")
if(a>7):
    print("The value of a is greater than 7.")
# Here we can see that we can print more than one statement bys using multiple statement.


# Write a program to print yes when the age enetered by the user is greater than 18 or equal to 18.
age=int(input("ENter the age:-"))
if age>=18:
    print("Yes")
else:
    print("You are underage.")
    

# Logical operator
age=45
if(age>34 and age <56):
    print("You can work with us ")
else:
    print("You cannot work with us.")

    
# IN or IS operator
a=None 
if(a is None):
    print("Yes")
else:
    print("No")
    
b=[45,6,34]
print(45 in b)


# Else statemnet is optional
a=67
if(a==8):
    print("yes")
elif(a>55):
    print("No")
    