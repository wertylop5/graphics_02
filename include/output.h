#ifndef OUTPUT_H
#define OUTPUT_H

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

#include"draw.h"

#define FILE_NAME	"picture.ppm"

//p must be the same dimension as the desired image
void writeToFile(Frame p);

#endif
