# -*- coding: utf-8 -*-
"""
Created on Sat Nov 14 15:11:40 2020

@author: HP
"""
mixed_list = [1, 'Two', True]

person_info = ('Abdul',25, 'Dhaka',45.25690) 

my_list1 = list(range(4,40,5))

my_list2 = list(range(5,50,5))

my_list3 = tuple(range(5,50,5))

print (my_list1)

print (my_list2)

print (my_list3)

print (my_list2[4])

print (my_list2[-2]*3)

my_list4 = my_list1 + my_list2

print (my_list4)

print(max(my_list4),min(my_list4),len(my_list4),sum(my_list4))

my_list5 = [5,6,7,8]  
my_list6 = ["Dhaka", 40.5,2]

my_list7 = my_list5 + my_list6

print (my_list7)

print(my_list5[-1]*3)

my_list5 = my_list5 * 3

print (my_list5)