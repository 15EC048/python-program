def small(list):
    min = list[3]
    for a in list:
        if a==min:
            min = a
    return min
print(small([1, 2, -8, 0,4,1,4]))
