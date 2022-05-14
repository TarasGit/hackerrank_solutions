import math

def print_matrix(matrix):
     for line in matrix:
        print(line)


def diagonal_difference(matrix):
     # Maxtris should be symetrical: 3x3, 4x4 ...
    #  [1,2,3] -> x
    #  [4,5,6]
    #  [7,8,9]
    m_len = len(matrix)
    left_right_sum = 0
    right_left_sum = 0

    for i in range(m_len):
        left_right_sum += matrix[i][i]
        j = m_len - i - 1
        right_left_sum += matrix[i][j]
    
    return abs(left_right_sum - right_left_sum)

def main():
    n = int(input().strip())
    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))
        
    print_matrix(arr)
    result = diagonal_difference(arr)

    print(f'Diagonal Difference is: {result}')


if __name__ == "__main__":
    main()