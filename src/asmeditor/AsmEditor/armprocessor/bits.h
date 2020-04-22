//
// Created by Prodigy on 18.04.2020.
//

#ifndef ASMEDITOR_BITS_H
#define ASMEDITOR_BITS_H
namespace Bits{
    unsigned int generateBitMask(unsigned int length);
    unsigned int getBits(unsigned int start, unsigned int end, unsigned int value);
    unsigned int getBit(unsigned int index,unsigned int data);
}

#endif //ASMEDITOR_BITS_H
