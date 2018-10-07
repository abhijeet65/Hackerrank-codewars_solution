#!/bin/python3

import math
import os
import random
import re
import sys

n = int(input())
mask = input().split()
mask = list(map(int, mask))
smask = sorted(mask)


index = [i+1 for i in range(n) if mask[i] != smask[i]]



if len(index) == 2:
    print('yes')
    
    print('swap', index[0], index[1])
    
else:
    
    game = mask[index[0]-1:index[len(index)-1]]
    if sorted(game) == game[::-1]:
        print('yes')
        print('reverse',index[0],index[len(index)-1])
    else:
        print('no')

