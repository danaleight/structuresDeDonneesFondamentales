#ifndef __FILE__H__
#define __FILE__H__

typedef struct fileElement
{
    int value;
    struct fileElement *next;
}fileElement, file;

#endif