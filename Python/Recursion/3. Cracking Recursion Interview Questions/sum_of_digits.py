def sum_of_digits(n):
    return int(n%10) + sum_of_digits(int(n/10))

sum_of_digits(4)


# def exp(n):
#     if n == 0:
#         return 0
#     print(n)
#     return exp(n-1)
#
#
# exp(5)
