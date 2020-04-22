//
// Created by Prodigy on 19.04.2020.
//

#include "SourceLocation.h"

SourceLocation::SourceLocation() {
    startline=0;
    startcol=0;
    endline=0;
    endcol=0;
}

SourceLocation::SourceLocation(int startline,int startcol,int endline,int endcol){
    this->startline = startline;
    this->startcol = startcol;
    this->endline = endline;
    this->endcol = endcol;
}