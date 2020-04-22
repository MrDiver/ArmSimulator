//
// Created by Prodigy on 18.04.2020.
//

#ifndef ASMEDITOR_CURRENTPROGRAMSTATUSREGISTER_H
#define ASMEDITOR_CURRENTPROGRAMSTATUSREGISTER_H

class CPSR{
public:
    bool N=0,Z=0,C=0,V=0;
    bool J=0;
    short GE = 0;
    bool E=0,A=0,I=0,F=0,T=0;
    short Mode = 0b10000;
    void reset(){
        N=0;Z=0;C=0;V=0;
        J=0;
        GE = 0;
        E=0;A=0;I=0;F=0;T=0;
        Mode = 0b10000;
    }
};
#endif //ASMEDITOR_CURRENTPROGRAMSTATUSREGISTER_H
