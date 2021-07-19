def sumofdigits(n):
    assert n >=0 and int(n) == n , "The number must be positive integer only!"
    if n == 0:
        return 0
    else:
        return int(n%10) + sumofdigits(int(n/10))


print(sumofdigits(1234))