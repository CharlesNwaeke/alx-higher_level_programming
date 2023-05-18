#!/usr/bin/python3
# This program performs basic arithmetic operations using a module called calculator_1
if __name__ == "__main__":
    import sys

    # Check if the number of arguments is correct
    nargs = len(sys.argv) - 1
    if nargs != 3:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)

    # Get the operator and the operands from the arguments
    op = sys.argv[2]
    a = int(sys.argv[1])
    b = int(sys.argv[3])

    # Check if the operator is valid and import the corresponding function from the module
    if op == '+':
        from calculator_1 import add
        result = add(a, b)
    elif op == '-':
        from calculator_1 import sub
        result = sub(a, b)
    elif op == '*':
        from calculator_1 import mul
        result = mul(a, b)
    elif op == '/':
        from calculator_1 import div
        result = div(a, b)
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)

    # Print the result of the operation
    print("{} {} {} = {}".format(a, op, b, result))
