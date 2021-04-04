#Histogram of any image without using hisogram library functions

import cv2 
import numpy as np 
import matplotlib.pyplot as plt 

def histo(img): 
	count = [] 
	r = [] 
	for k in range(0, 256): 
		r.append(k) 
		count1 = 0

		for i in range(m): 
			for j in range(n): 
				if img[i, j]== k: 
					count1+= 1
		count.append(count1) 
		
	return (r, count) 

img = cv2.imread('images/image1.png', 0) 

m, n = img.shape 
r1, count1 = histo(img) 

plt.stem(r1, count1) 
plt.xlabel('intensity value') 
plt.ylabel('number of pixels') 
plt.title('Histogram of the original image') 

plt.show();



