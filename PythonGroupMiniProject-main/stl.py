import csv
i_counter=0;
count=0;
sdata_dict={};
gbg_list=[];
def readlines_in_row():
	with open('gbg.csv','r') as datas:
		reader=csv.reader(datas)
		for row in reader:
			yield [ float(i) for i in row ]
for i in readlines_in_row():
	gbg_list.append(i);
	count=count+1;
for i_counter in range(0,count):
	sdata_dict[gbg_list[i_counter][0]]={'x_value':gbg_list[i_counter][1],'y_value':gbg_list[i_counter][2],'z_value':gbg_list[i_counter][3]};
print(sdata_dict);
