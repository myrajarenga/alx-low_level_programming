#!/usr/bin/python3
from ctypes import *

so_file = "/root/alx-low_level_programing/0x18-dynamic_libraries/100-operations.so"

file = CDLL(so_file)
print(type(file))
print(file.square(10))

print("Done")
