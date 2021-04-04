#Transpose

from PIL import Image, ImageOps
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.pyplot import imread


img = imread('image/bean.jpg')
newimg = imread('image/bean.jpg')
newimg.setflags(write=1)

for i in range(1,512):
	for j in range(1,512):
		newimg[j][i] = img[i][j];

plt.imshow(newimg);
plt.show();