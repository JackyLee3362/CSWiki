while True:
    try:
        a = input()
        if a!= "0":
            print("{0:.2f}".format(eval(a)))
    except:
        break
