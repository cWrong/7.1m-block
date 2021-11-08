import csv

f = open('top-1m.csv', 'r')
fo = open('1m.txt', 'w')

lines = csv.reader(f)
for line in lines:
	fo.write(line[1] + '\n')

