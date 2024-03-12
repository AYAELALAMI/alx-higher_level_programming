#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number >= 0:
    last_dig = number % 10
else:
    last_dig = ((number * -1) % 10) * -1

the_message = "Last digit of %d is %d and is" % (number, last_dig)

if last_dig > 5:
    print(the_message, "greater than 5")
elif last_dig < 5:
    print(the_message, "less than 6 and not 0")
else:
    print(the_message, "0")
