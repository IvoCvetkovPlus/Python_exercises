# -*- coding: utf-8 -*-
"""
Created on Thu Sep 23 11:29:23 2021

@author: Ivo
"""
cats = {}
x=1
for x in range(1,101):
    cats[x] = "hat"


counter = 0;

for f in range(1,100):
    for z in cats:   
        if counter%f == 0 and cats[z]=="hat":
           cats[z] = "no hat"
        else:
            cats[z] = "hat"
        counter +=1
print(cats)

    
