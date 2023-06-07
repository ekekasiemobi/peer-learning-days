#!/usr/bin/python3

import sys
argument = sys.argv[1:]
num_argument = len(argument)
print(f"{num_argument} argument.")
for i in range(num_argument):
    position = i + 1
    arguments = argument[i]
    print(position, ":", arguments)
