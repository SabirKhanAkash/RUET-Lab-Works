import cv2
import imutils
import copy

image = cv2.imread('D:/Study Materials/Study/Lab/RUET-Lab-Works/4-1/CSE 4106 (Digital Image Processing)/CT/Sample_Image.jpg',0)
cv2.imshow('Original Image', imutils.resize(image, 512))

#Smoothing Filter
#Here the mean filter was manually implemented on the sample image

avg_image = copy.deepcopy(image)
for i in range(1, image.shape[0]-1):
    for j in range(1, image.shape[1]-1):
        sum_image = sum([image[l, k] for l in range(i-1, i+2) for k in range(j-1, j+2)])
        avg_image [i, j] = int(sum_image/9)

cv2.imshow('Average Image (Smoothing Image)', imutils.resize(avg_image , 512))


#Sharpening Filter
#Here the Laplacian Filter was manually implemented on the sample image

lapla_img = copy.deepcopy(image)
for i in range(1, image.shape[0]-1):
    for j in range(1, image.shape[1]-1):
        tmp = image[i-1, j-1] + image[i-1, j] + image[i-1, j+1] + image[i, j-1] + \
                image[i, j+1] + image[i+1, j-1] + image[i+1, j] + image[i+1, j+1] - 8*image[i, j]
        lapla_img[i, j] = image[i, j] - tmp

cv2.imshow('Laplacian Image (Sharpening Image)', imutils.resize(lapla_img, 512))

cv2.waitKey(0)
cv2.destroyAllWindows()
