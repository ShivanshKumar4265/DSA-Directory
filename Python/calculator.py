num1=int(input("Enter first number :-"))
num2=int(input("Enter second number :-"))

sign=input("Enter the operation to be done with boht number:-")

match sign:
    case "+":
        print("Sum is ",num1+num2)
    case "-":
        print("Difference is", num1-num2)
    case "*":
        print("Multiplication is",num1*num2)
    case "/":
        print("Division is",num1/num2)