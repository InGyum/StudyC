/*
  filename - cak.c
  version - 1.0
  description - ±‚∫ª ∏ﬁ¿Œ «‘ºˆ
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - ±Ë¿Œ∞‚.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "calc.h"

int get_total(int* data, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res += data[i];
    }

    return res;
}