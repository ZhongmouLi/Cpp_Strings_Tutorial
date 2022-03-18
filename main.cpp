#include <iostream>
#include <array>

int main()
{

    std::cout<<"hello"<<std::endl;

    // declear an arrary
    int arr_1[5];

    std::cout<<"first element of arry is "<<arr_1[0]<<std::endl;


    // declear a pointer
    int* ptr_1 =  nullptr;
    ptr_1 = arr_1;

    arr_1[0] = 5;
    std::cout<<"pointer of arry is "<<*ptr_1<<std::endl;


    // index of arry and pointer
    arr_1[2] = 4;
    std::cout<<"thrid element of arry is "<<arr_1[2]<<std::endl;
    std::cout<<"pointer of arry is "<<*(ptr_1+2)<<std::endl;


    // 
    int* ptr_2 = new int[6];

    *(ptr_2+5) = 100;
    ptr_2[4] =99;

    std::cout<<"pointer of arry 2 is "<<*(ptr_2+5)<<std::endl;
    std::cout<<"pointer of arry 2 is "<<*(ptr_2+4)<<std::endl;

    delete[] ptr_2;

    // std:arrary
    std::array<int,5> arry_3;
    
    for (int i = 0; i < arry_3.size(); i++) // .size()
    {
        arry_3[i] = i;
        std::cout<< arry_3[i]<<std::endl;
    }
    

    std::cout<<"std arry size is "<<arry_3.size()<<std::endl;

    return 1;
}