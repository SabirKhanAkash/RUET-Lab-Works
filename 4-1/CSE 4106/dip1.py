from PIL import Image, ImageOps
import numpy as np

img = Image.open("image/sample.jpg")

print("Image size: ",img.size)

img.show();

newsizeImage = (512,512)

bilinear = img.resize(newsizeImage,Image.BILINEAR)
bicubic = img.resize(newsizeImage,Image.BICUBIC)
nearest = img.resize(newsizeImage,Image.NEAREST)

bilinear.show(title='Bi Linear');
bilinear.save('image/Bi Linear.jpg')

bicubic.show(title='Bi Cubic');
bicubic.save('image/Bi cubic.jpg')

nearest.show(title='Nearest Neighbour');
nearest.save('image/Nearest Neighbour.jpg')

print("After Interpolation now Image Size: ",bilinear.size);

a1 = np.array(bilinear); 
a2 = np.array(bicubic); 
a3 = np.array(nearest)

print("Mean Squared Error between Bi Linear & Bi Cubic interpolation= ", (np.square(a1-a2)).mean())
print("Mean Squared Error between Bi Linear & Nearest Neighbour interpolation = ", (np.square(a1-a3)).mean())
print("Mean Squared Error between Bi Cubic & Nearest Neighbour interpolation = ", (np.square(a2-a3)).mean())