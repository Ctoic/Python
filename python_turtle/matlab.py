#import matlab.engine
import numpy as np

#make function to find derivative of a function
def derivative(f,x):
    h = 0.00001
    return (f(x+h)-f(x))/h

derivative(1, 2)
#make function to find integral of a function
def integral(f,x):
    h = 0.00001
    return (f(x+h)-f(x))/h

#make function to find area under a curve
def area(f,x):
    h = 0.00001
    return (f(x+h)-f(x))/h

#make function to find area under a curve
def area(f,x):
    h = 0.00001
    return (f(x+h)-f(x))/h

#allocate mmemory for a matrix
A = np.zeros((3,3))
#allocate memory for a vector
B = np.zeros((3,1))
#allocate memory for a vector
C = np.zeros((3,1))