n1=int(input("Enter the number:-"))
n2=int(input("Enter the number:-"))
n3=int(input("Enter the number:-"))
n4=int(input("Enter the number:-"))

if(n1>n4):
    f1=n1
else:
    f1=n4
    
if(n2>n3):
    f2=n2
else:
    f2=n3
    
if f1>f2:
    print(str(f1) + "is greatest.")
else:
    print(str(f2) + "is greatest.")
    
    
