#Image Segmentation using Thresholding

import cv2
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.pyplot import imread

image = cv2.imread('images/pencil.jpeg')
img = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

ret, threshold1 = cv2.threshold(img, 150, 255, cv2.THRESH_BINARY)
ret, threshold2 = cv2.threshold(img, 90, 255, cv2.THRESH_BINARY_INV)
ret, threshold3 = cv2.threshold(img, 100, 255, cv2.THRESH_TRUNC)
ret, threshold4 = cv2.threshold(img, 110, 255, cv2.THRESH_TOZERO)
ret, threshold5 = cv2.threshold(img, 120, 255, cv2.THRESH_TOZERO_INV)

fig, axs = plt.subplots(3,2)

cax_00 = axs[0,0].imshow(image)
cax_00 = axs[0,0].set_title('Original Image')

cax_01 = axs[0,1].imshow(threshold1, cmap='gray')
cax_01 = axs[0,1].set_title('Binary Threshold')

cax_10 = axs[1,0].imshow(threshold2, cmap='gray')
cax_10 = axs[1,0].set_title('Binary Threshold Inverted')

cax_11 = axs[1,1].imshow(threshold3, cmap='gray')
cax_11 = axs[1,1].set_title('Truncated Threshold')

cax_20 = axs[2,0].imshow(threshold4, cmap='gray')
cax_20 = axs[2,0].set_title('Set to 0')

cax_21 = axs[2,1].imshow(threshold5, cmap='gray')
cax_21 = axs[2,1].set_title('Set to 0 inverted')

plt.show();