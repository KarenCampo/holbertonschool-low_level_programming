					# IN THIS PROJECT WE ARE GOIN TO LEARN...


* If we need to cast the result of malloc in C  language
* malloc and free (concept and use)
* Automatic and dynamic allocation (what are them)
* If we need to cast the result of malloc in C  language
* malloc and free (concept and use)
* Automatic and dynamic allocation (what are them)
 calloc and realloc (concept and differences with malloc)


## malloc, calloc and realloc
### mallock

Function that allocates the requested memory and returns a pointer to it.

* Parameters
* Return Value: This function returns a pointer to the allocated memory, or NULL if the request fails.

### calloc

allocates the requested memory and returns a pointer to it. The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.

* Return Value: This function returns a pointer to the allocated memory, or NULL if the request fails.

### realloc
attempts to resize the memory block pointed to by ptr that was previously allocated with a call to malloc or calloc

* Return Value: This function returns a pointer to the newly allocated memory, or NULL if the request fails.
---------------------------------------------------------------------------------------------------------------------
#### ***Author***

[Karen](http://github.com/KarenCampo)