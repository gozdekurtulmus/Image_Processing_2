## Exercise 1 Image Filtering with a Gaussian Filter

```
a. Write a new member functionImage::smoothxthat takes a single-
precision floating point numbersigmaand convolves the image in the
x direction with a Gaussian filter with the corresponding standard de-
viation. Assume that the filter coefficients are zero after two standard
deviations.
```
```
b. Write a new member functionImage::smoothythat performs the
same operation in the y direction.
```
```
c. Write a new member functionImage::smooththat performs Gaussian
smoothing both in the x and y directions with standard deviations
sigmaxandsigmay.
```

Hint:To compute the filter first compute the filter length in one direction,
sayl. The filter length should be 2∗l+ 1 since the Gaussian is symmetric.
Fill in coefficient values by sampling the Gaussian form


### exp ^( (− 0.5) * (x^2) / (σ^2) )

by assuming the filter center is atx= 0. Then normalize the filter such that
the elements sum up to 1. Note that, we did not need the normalization
factor 1/√2πσ^2  since we normalize the filter coefficients at the end.


## Exercise 2 Image Derivatives

```
a. Write a new member functionImage::derivxthat takes computes
the image derivative in the x direction using a filter of the form
```
###  [-1 0 1 
###    -2 0 2
###    -1 0 1 ]

```
The results should be returned in a newly allocated array of typeshort
which can store negative values.
```
```
b. Write a new member functionImage::derivythat takes computes
the image derivative in the y direction using a filter of the form
```
###  [-1  -2  -1 
###    0 0 0
###    1 2 1 ]


```
The results should be returned in a newly allocated array of typeshort
which can store negative values.
```
## Exercise 3 Geometric Transforms

```
a. Write a new member functionImage::rotate that takes a single-
precision floating point numberθand anImagepointerout. After
the function call finishes the image pointed byoutshould contain the
result of applying the rotation
```

### x′=Rθx= [ cosθ  −sinθ ; sinθ cosθ ]

```
with nearest neighbor sampling.
```
```
b. Add an option to perform bilinear sampling to the functionImage::rotate.
c. Add an option to perform the rotation around the image center.
```
Hint:You must not change the size of the imageout.
