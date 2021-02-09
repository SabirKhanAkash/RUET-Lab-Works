# RGB Channel Seperation of an image
	
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.pyplot import imread

img = imread("images/image1.png")

red = img[:, :, 0];
green = img[:, :, 1];
blue = img[:, :, 2];

fig, axs = plt.subplots(2,2)

cax_00 = axs[0,0].imshow(img)
fig.colorbar(cax_00, ax=axs[0,0])
axs[0,0].xaxis.set_major_formatter(plt.NullFormatter())  
axs[0,0].yaxis.set_major_formatter(plt.NullFormatter())  

cax_01 = axs[0,1].imshow(red, cmap='Reds')
fig.colorbar(cax_01, ax=axs[0,1])
axs[0,1].xaxis.set_major_formatter(plt.NullFormatter())
axs[0,1].yaxis.set_major_formatter(plt.NullFormatter())

cax_10 = axs[1,0].imshow(green, cmap='Greens')
fig.colorbar(cax_10, ax=axs[1,0])
axs[1,0].xaxis.set_major_formatter(plt.NullFormatter())
axs[1,0].yaxis.set_major_formatter(plt.NullFormatter())

cax_11 = axs[1,1].imshow(blue, cmap='Blues')
fig.colorbar(cax_11, ax=axs[1,1])
axs[1,1].xaxis.set_major_formatter(plt.NullFormatter())
axs[1,1].yaxis.set_major_formatter(plt.NullFormatter())

plt.show();
