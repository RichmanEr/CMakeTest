#include <iostream>
#include <cmath>

void printDiamond (int storey)
{
    for (int i=1-storey;i<=storey;i++){
    for (int j=1-storey;j<=storey;j++){
        int sum =  abs (i)+abs (j);//math function
        if (sum <= storey -1)
            {
                std::cout <<"*";
            }
        else
            std::cout <<" ";        
    }
    std::cout << std::endl;
}

}


int main(int, char**) {
    std::cout << "Begin OutPut:" << std::endl;
    int num = 6;
    printDiamond(num);
    // for (int i = 1; i <= num ; i++) {
    //     auto lamuda = [=]{std::cout << "*" <<" ";};
    //     for (int j = 0; j < i;j++) {
    //         lamuda();
    //     }
    //     std::cout << std::endl;
    // }  
   
}
