#!/usr/bin/python3

from calculator_1 import add, sub, div, mul
import sys

argv = sys.argv[1:]
if len(argv) != 3:
    print("Usage: ./100-my_calculator.py <a> <operator> <b>")
    exit(1)

a = int(argv[0])
b = int(argv[2])
op = argv[1]
    
if op == "+" :
    print(f"{a} + {b} = {add(a, b)}")
elif op == "-":
    print(f"{a} - {b} = {sub(a, b)}")
elif op == "*":
    print(f"{a} * {b} = {mul(a, b)}")
elif op == "/":
    print(f"{a} / {b} = {div(a, b)}")
else:
    print("Unknown operator. Available operators: +, -, * and /")
    exit(1)
