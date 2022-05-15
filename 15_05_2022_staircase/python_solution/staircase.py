#!/bin/python3

def staircase(n):
    # Write your code here
    for i in range(n):
        current_pos = n - i - 1
        for j in range(n):
            if j >= current_pos:
                print("#", end='')
            else:
                print(" ", end='')
        print("")

if __name__ == '__main__':
    n = int(input().strip())
    staircase(n)
