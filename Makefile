#
# Makefile
#
# for sort.c
# 

sort: sort.c helpers.c helpers.h
	clang -O0 -std=c11 -Wall -Werror -o sort sort.c helpers.c -lcs50 -lm
	
