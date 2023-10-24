m1=int(input("Enter tha marks of m1 out of 100:-"))
m2=int(input("Enter tha marks of m2 out of 100:-"))
m3=int(input("Enter tha marks of m3 out of 100:-"))

percent=(m1+m2+m3)/3
if m1<33 or m2<33 or m3<33:
    print("Fail")
elif(percent<40):
    print("You are fail due to total percentage  less than 40")
else:
    print("Congrats! You are passed")

 