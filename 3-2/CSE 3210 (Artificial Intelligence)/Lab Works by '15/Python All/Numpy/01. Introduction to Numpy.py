# Import numpy
import numpy as np

# Celcius to Farenheit Example
print("Celcius to Farenheit Problem:")

# Assigning values
cvalues = [25.3, 24.8, 26.9, 23.9]
C = np.array(cvalues)
print("Values in Celcius:", C)

# In normal python
fvalues = []
for i in cvalues:
    fvalues.append(i*9/5 + 32)
print("Values in Farenheit (Normal Python):", fvalues)

# Using numpy
print("Value in Farenheit (Numpy):", C * 9 / 5 + 32)

print(), print(), print()





# Ranges Example
print("Ranges Example:")

# In Python
x = range(1,10)
print("Range(1, 10):", list(x))

# In numpy
a = np.arange(1, 10)
print("np.arange(1, 10):", a)

print(), print(), print()





# Linspace Example
print("Linspace Example:")
print("np.linspace(1, 10):\n", np.linspace(1, 10)), print()
print("np.linspace(1, 10, 7):\n", np.linspace(1, 10, 7)), print()
print("np.linspace(1, 10, 7, endpoint = False):\n", np.linspace(1, 10, 7, endpoint = False)), print()

samples, spacing = np.linspace(1, 10, retstep=True)
print("spacing (when samples, spacing = np.linspace(1, 10, retstep=True)):", spacing)
samples, spacing = np.linspace(1, 10, 20, endpoint=False, retstep=True)
print("spacing (when samples, spacing = np.linspace(1, 10, 20, endpoint=False, retstep=True)):", spacing)
samples, spacing = np.linspace(1, 10, 20, endpoint=True, retstep=True)
print("spacing (when samples, spacing = np.linspace(1, 10, 20, endpoint=True, retstep=True)):", spacing)

print(), print(), print()





# Comparison between Normal Python and Numpy on execution time
print("Comparison between Normal Python and Numpy on execution time:")
import time
size_of_vec = 1000000

def pure_python_version():
    t1 = time.time()
    X = range(size_of_vec)
    Y = range(size_of_vec)
    Z = []
    for i in range(len(X)):
        Z.append(X[i] + Y[i])
    return time.time() - t1

def numpy_version():
    t1 = time.time()
    X = np.arange(size_of_vec)
    Y = np.arange(size_of_vec)
    Z = X + Y       # If u get a warning, just ignore that.
    return time.time() - t1

t1 = pure_python_version()
t2 = numpy_version()
print("Python Needs:", t1, "\nNumpy Needs:", t2)
print("Numpy is in this example " + str(t1/t2) + "% faster!")

print(), print(), print()





# Arrays Example
print("Arrays Example:\n")

# Zero Dimensional Array 
print("Zero Dimensional Array Example:")
x = np.array(42)
print("Type of x:", type(x))
print("Dimension:", np.ndim(x))
print()

# One Dimensional Array
print("One Dimensional Array Example:")
F = np.array([1, 1, 2, 3, 5, 8, 13, 21])
V = np.array([3.4, 6.9, 99.8, 12.8])
print("Datatype of F:", F.dtype)
print("Datatype of V:", V.dtype)
print("Dimension of F:", np.ndim(F))
print("Dimension of V:", np.ndim(V))
print()

# Two and Multi-dimensional Array
print("Two and Multidimensional Array Example:")
A = np.array([  [3.4, 8.7, 9.9],
                [1.1, -7.8, -0.7],
                [4.1, 12.3, 4.8]])
print("A:\n", A)
print("Dimension of A:", A.ndim)
B = np.array([  [[111, 112], [121, 122]],
                [[211, 212], [221, 222]],
                [[311, 312], [321, 322]]  ])
print("B:\n", B)
print("Dimension of B:", B.ndim)
print()

# Array Shape
print("Array Shape:")
print("Shape of x:", np.shape(x))
print("Shape of F:", np.shape(F))
print("Shape of V:", np.shape(V))
print("Shape of A:", np.shape(A))
print("Shape of B:", np.shape(B))
x = np.array([  [67, 63, 87],
                [77, 69, 59],
                [85, 87, 99],
                [79, 72, 71],
                [63, 89, 93],
                [68, 92, 78]  ])
print("x:\n", x)
print("Shape of x:", x.shape)   # Same as np.shape(x)
x.shape = (3,6)
print("After coverting shape to (3, 6):\n", x)
print()

# Indexing Array
print("Array Indexing:")
print("F[0]:", F[0])
print("F[-1]:", F[-1])
print("B[0][1][0]:", B[0][1][0])
print("A[1][0]:", A[1][0])
print("A[1, 0]:", A[1, 0])
print()

# Slicing Array
print("Array Slicing:")
S = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
print("S:", S)
print("S[2:5]:", S[2:5])
print("S[:4]:", S[:4])
print("S[6:]:", S[6:])
print("S[:]:", S[:])
A = np.array([  [11,12,13,14,15],
                [21,22,23,24,25],
                [31,32,33,34,35],
                [41,42,43,44,45],
                [51,52,53,54,55]    ])
print("A:\n", A), print()
print("A[:3, 2:]:\n", A[:3, 2:]), print()
print("A[3:, :]:\n", A[3:, :]), print()
print("A[:, 4:]:\n", A[:, 4:]), print()

# Arrays of ones and zeros
E = np.ones((2,3))
print("E:\n", E)
F = np.ones((2,3), dtype=int)
print("F:\n", F)
Z = np.zeros((2,3))
print("Z:\n", Z)

print(), print(), print()
print("Congrats! You've completed Numpy portion of the slide.")