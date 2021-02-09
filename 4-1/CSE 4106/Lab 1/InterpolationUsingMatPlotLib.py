from PIL import Image, ImageOps
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.pyplot import imread

img = imread("image/sample.jpg")

fig, axs = plt.subplots(2,2)

cax_00 = axs[0,0].imshow(img)
cax_00 = axs[0,0].set_title('Original Image')

cax_01 = axs[0,1].imshow(img, interpolation='bilinear')
cax_01 = axs[0,1].set_title('Bi-Linear Interpolation')

cax_10 = axs[1,0].imshow(img, interpolation='bicubic')
cax_10 = axs[1,0].set_title('Bi-Cubic Interpolation')

cax_11 = axs[1,1].imshow(img, interpolation='nearest')
cax_11 = axs[1,1].set_title('Nearest Neighbour Interpolation')

plt.show();

img = Image.open("image/sample.jpg")
newsizeImage = (512,512)

bilinear = img.resize(newsizeImage,Image.BILINEAR)
bicubic = img.resize(newsizeImage,Image.BICUBIC)
nearest = img.resize(newsizeImage,Image.NEAREST)

a1 = np.array(bilinear); 
a2 = np.array(bicubic); 
a3 = np.array(nearest)

print("Mean Squared Error between Bi Linear & Bi Cubic interpolation= ", (np.square(a1-a2)).mean())
print("Mean Squared Error between Bi Linear & Nearest Neighbour interpolation = ", (np.square(a1-a3)).mean())
print("Mean Squared Error between Bi Cubic & Nearest Neighbour interpolation = ", (np.square(a2-a3)).mean())