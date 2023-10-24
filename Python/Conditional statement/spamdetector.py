a=input("Enter the text:-")
if("make a lot of money" in a):
    spam=True
elif("buy now" in a):
    spam=True
elif("click this" in a ):
    spam= True
elif("subscribe this" in a ):
    spam= True 
else:
    spam=False

if(spam):
    print("This text is spam")
else:
    print("This text is not spam.")