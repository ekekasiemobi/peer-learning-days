#!/usr/bin/python3

import sys
sum = 0
argument = sys.argv[1:]
num_argument = len(argument)

for i in range(num_argument):
    sum = sum + int(argument[i])
if __name__ == '__main__':
    print(sum)
