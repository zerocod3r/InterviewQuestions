#!/bin/python3

import math
import os
import random
import re
import sys

def checkEven(n):
    if 2<=n<=5 or n>20:
        return "Not Weird"
    if 6<=n<=20:
        return "Weird"

def printWeird(n):
    print("Weird" if n%2!=0 else checkEven(n))

if __name__ == '__main__':
    n = int(input())
    printWeird(n)
