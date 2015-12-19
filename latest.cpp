
    input array: h
    output array: R (of size n)
    j := 0
    m := size of h
    for i := 0 to n-1
        R[i] := h[j]
        s := (j+1)%m
        h[j] := ( ( h[j] ^ h[s] ) + 13 ) % 835454957
        j := s
#include<stdio.h>
#include<conio.h>
