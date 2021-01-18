# Try to read and show the different channel of RGB image.

from PIL import Image, ImageOps
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.pyplot import imread


img = imread('image/football.jpg')

# img1 = img[:,:,0];
# img2 = img[:,:,1];
# img3 = img[:,:,2];

img_segment = np.zeros((693,800));

# plt.imshow(img);


for i in range(0,692):
	for j in range(0,799):
		if img[i][j] > 245:
			img_segment[i][j] = 1;


plt.imshow(img_segment);
plt.show();