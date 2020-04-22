//
// Created by Prodigy on 19.04.2020.
//
#include "bits.h"
#include <cmath>
namespace Bits{
    unsigned int generateBitMask(unsigned int length){
        return pow(2,length)-1;
    }
    unsigned int getBits(unsigned int start, unsigned int end, unsigned int value){
        unsigned int tmp = (value >> end);
        unsigned int bitmask = generateBitMask(start-end+1);
        return tmp & bitmask;
    }

    unsigned int getBit(unsigned int index,unsigned int data){
        return getBits(index,index,data);
    }
}