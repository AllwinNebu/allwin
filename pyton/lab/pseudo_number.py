import random

def custom_pseudo_random(seed, num_elements):
    random.seed(seed)
    generated_numbers = [random.random() for _ in range(num_elements)]
    print( generated_numbers)


seed=int(input("Enter the sequence  you want to produce  : "))
number_of_random=int(input("Enter the number of random number you want : "))
custom_pseudo_random(seed, number_of_random)
