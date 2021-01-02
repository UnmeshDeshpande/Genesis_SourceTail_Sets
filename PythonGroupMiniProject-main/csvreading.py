import csv


def readlines_inarow():
    with open('gbg.csv', 'rU') as datas:
        reader = csv.reader(datas)
        for row in reader:
            yield [ float(i) for i in row ]

for i in readlines_inarow():
    print(i)
    print(type(i))
    print(i[0]+i[1])
