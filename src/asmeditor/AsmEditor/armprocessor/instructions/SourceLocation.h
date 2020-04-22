//
// Created by Prodigy on 19.04.2020.
//

#ifndef ASMEDITOR_SOURCELOCATION_H
#define ASMEDITOR_SOURCELOCATION_H


class SourceLocation{
public:
    int startline,startcol,endline,endcol;
    SourceLocation();
    SourceLocation(int startline,int startcol,int endline,int endcol);
};


#endif //ASMEDITOR_SOURCELOCATION_H
