#!/bin/bash
gcc rand.c -O3 -static -march=native -flto -o rand.elf
gcc prng.c -O3 -static -march=native -flto -o prng.elf
