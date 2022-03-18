# C++ array
The purpose of arrary is to contain a collection of data, rather than creating enormous varaibles.

## How to define an array
An arrary is defined as 
```
    type_name arr_name[Size_Arrary]
```
where one example is given as
```
    int arry_1[5]
```
Two things to note here
- **index begins from 0**,
- for the arry defined above, the index are 0,1,2,3,4.

## Cooperate array and raw pointers
**Array is a pointer indeed.** 

Thus, we can assign a pointer with an array.

```
    int* ptr_1 =  nullptr;
    ptr_1 = arr_1;

    arr_1[0] = 5;
    std::cout<<"pointer of arry is "<<*ptr_1<<std::endl;
```    


## Arrays in heap and stack
Arrary is storied in stack, such as
```
int arry[5]
```
or, can be storied in heap, such as
```
int* ptr = new int[5]
```
One key difference is life time: arry in stack is destoried reaching the end of scope, whereas arry in heap can be destoried by us with the following command
```
delete[] ptr 
```


## std::arrary in C++ 11
A hearder file is needed for std::arrary in C++ 11
```
#include <array>
```
An array definition requires type and size information, such as 
```
std::arary<int,5> arry_std;
```
