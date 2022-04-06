#!/bin/bash
gcc -c *c
ar crs liball.a *.o
ranlib liball.a

