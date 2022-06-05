#!/usr/bin/python3
def no_c(my_string):
    length = len(my_string)

    r = 0
    new_str = my_string[:]

    for i in range(length):
        if (my_string[i] == 'c' or my_string[i] == 'C'):
            new_str = new_str[:(i - r)] + my_string[(i + 1):]
            r += 1

    return (new_str)
