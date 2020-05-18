//
// Created by Prodigy on 19.04.2020.
//

#ifndef ASMEDITOR_SOURCELOCATION_H
#define ASMEDITOR_SOURCELOCATION_H

#include <string>
class SourceLocation{
public:
    int startline,startcol,endline,endcol;
    SourceLocation();
    SourceLocation(int startline,int startcol,int endline,int endcol);
    std::string toString();
};


#endif //ASMEDITOR_SOURCELOCATION_H
