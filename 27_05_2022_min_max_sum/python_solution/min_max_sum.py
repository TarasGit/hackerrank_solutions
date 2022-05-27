#!/bin/python3

MAX = 4
def miniMaxSum(arr):
    # Write your code here
    c_arr_max = arr.copy()
    c_arr_min = arr.copy()
    max_arr = []
    min_arr = []
    
    for _ in range(MAX):
        min_el = min(c_arr_min)
        min_arr.append(min_el)
        c_arr_min.remove(min_el)
    
        max_el = max(c_arr_max)
        max_arr.append(max_el)
        c_arr_max.remove(max_el)
    
    max_result = sum(max_arr)
    min_result = sum(min_arr)
    
    print(f'{min_result} {max_result}')

if __name__ == '__main__':
    arr = [1,2,3,4,5,6,7,8,9]
    miniMaxSum(arr)
