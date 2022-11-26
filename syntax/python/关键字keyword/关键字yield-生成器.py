# %%
def foo():
    print("starting...")
    while True:
        res = yield 4
        print("res:",res)
g = foo()
print(next(g))
print("*"*20)
print(next(g))

# %%
def simple_generate():
    x = 1
    while x < 10:
        yield x
        x += 1

generator = simple_generate()
for i in generator:
    print(i)