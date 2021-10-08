//
//  main.cpp
//  Ex2021
//
//  Created by 엄성진 on 2021/09/06.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    for(int i=1;i<9;i++) {
        for(int j=1;j<9;j++) {
            std::cout << i << " * " << j << " = " << i*j << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
