#!/usr/bin/python3
def filter_even_numbers(*args):
    even=[]
    for n in args:
        if n %2==0:
            even.append(n)
        else:
            pass
        
    return even
