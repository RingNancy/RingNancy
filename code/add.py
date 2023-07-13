while True:
    try:
        a, b = map(int, input().split()) #将数据输入到map中int类型的数据， 通过函数split（）分开；
        c = a + b
        print(c)
    except:
        break