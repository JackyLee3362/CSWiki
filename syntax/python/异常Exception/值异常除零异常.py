# exceptions 异常
try:
    x = int(input("Please enter a number: "))
    y = 10 / x
except (ValueError , ZeroDivisionError) as e:
    print("Oops!  That was no valid number.  Try again...")
    print(type(e))
finally:
    print("finally block")