import math
import os
import random
import re 
import sys

def plus_minus(arr):
	positive_lambda = lambda x: x > 0
	negative_lambda = lambda x: x < 0
	null_lambda = lambda x: x == 0
	
	positive_count = 0
	negative_count = 0
	null_count = 0	

	positive_count = len(list(filter(positive_lambda, arr)))
	negative_count = len(list(filter(negative_lambda, arr)))
	null_count = len(list(filter(null_lambda, arr)))

	my_len = len(arr)
	
	print(f'{positive_count/my_len:0.6f}')
	print(f'{negative_count/my_len:0.6f}')
	print(f'{null_count/my_len:0.6f}')


def main():
	n = int(input().strip())
	arr = list(map(int, input().rstrip().split()))

	plus_minus(arr)

if __name__ == '__main__':
	main()
