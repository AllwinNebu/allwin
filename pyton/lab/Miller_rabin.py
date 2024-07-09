import random

def miller_rabin_test(n, k):
    if n <= 1 or n == 4:
        return False
    if n <= 3:
        return True

   
    d = n - 1
    while d % 2 == 0:
        d //= 2

    for _ in range(k):
        a = random.randint(2, n - 2)
        x = pow(a, d, n)
        
        if x == 1 or x == n - 1:
            continue
        
        while d != n - 1:
            x = (x * x) % n
            d *= 2
            
            if x == 1:
                return False
            if x == n - 1:
                break
        else:
            return False

    return True

def main():
    n = int(input("Enter the number to test for primality: "))
    k = int(input("Enter the number of iterations: "))
    if miller_rabin_test(n, k):
        print(f"{n} is probably a prime number")
    else:
        print(f"{n} is composite")

if __name__ == "__main__":
    main()
