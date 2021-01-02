#This is the main logic program of the code
# @OP I would like it if you send me the dataset as a dictionary

import csv
import matplotlib.pyplot as plt
i_counter = 0
count = 0
sdata_dict = {}
gbg_list = []


def readlines_in_row():
    with open('gbg.csv', 'r') as datas:
        reader = csv.reader(datas)
        for row in reader:
            yield [float(i) for i in row]


for i in readlines_in_row():
    gbg_list.append(i)
    count = count + 1
for i_counter in range(0, count):
    sdata_dict[gbg_list[i_counter][0]] = \
        {'x_value': gbg_list[i_counter][1],
         'y_value': gbg_list[i_counter][2],
         'z_value': gbg_list[i_counter][3]}


def iterdict(d, r, c):
    for (k, v) in d.items():
        if isinstance(v, dict):
            if k == r:
                return iterdict(v, k, c)
        else:
            if k == c:
                op = v
                return op


# DB = {1:{'x':1.23,'y':4.11,'z':5.12},2:{'x':0.21,'y':3.21,'z':5.54}};
# print(iterdict(sdata_dict,2231,'x_value'));

itera = 1
plus = 0
minus = 0
flag = 0
mflag = 0
uflag = 0
dflag = 0
pos = 0
posp = list()
pmode = list()
while itera < 8174:
    val = iterdict(sdata_dict, itera, 'z_value')

    # print(val);

    itera = itera + 1
    if val > 10.0 and flag == 0:
        pmode.append(plus)
        plus = plus + 1
        flag = 1

        # print("up: ");
        # print(plus);
        # print(flag);

    if val < 9.7 and flag == 1:
        flag = 0

        # print("stabilised");

        pmode.append(plus)
    if val < 9.5 and mflag == 0:
        pmode.append(minus)
        minus = minus + 1
        mflag = 1

        # print("down: ");
        # print(minus);
        # print(flag);

    if val > 9.7 and mflag == 1:
        mflag = 0

        # print("stabilised");

        pmode.append(minus)
    if plus > minus and uflag == 0:
        print ('going up!')
        uflag = 1
        posp.append(pos)
        pos = pos + 1
    if minus > plus and uflag == 0:
        print ('going down!')
        posp.append(pos)
        uflag = 1
        pos = pos - 1
    if plus == minus and uflag == 1:

        # posp.append(pos)

        print ('opening doors')
        dflag = dflag + 1
        uflag = 0

# pos = pos - 1;

posp.append(pos)
print ('Total number of stops:', dflag)
print ('Final Floor:', pos)
plotno = list(range(dflag + 1))
dflag2 = 4 * dflag - 1
plotno2 = list(range(dflag2))
plt.plot(plotno, posp, color='red', marker='x')
plt.plot(plotno2, pmode, color='green', marker='o')
plt.title('Lift Position vs Stops', fontsize=14)
plt.xlabel('Stops', fontsize=14)
plt.ylabel('Lift Position', fontsize=14)
plt.grid(True)
plt.show()  # plotter
