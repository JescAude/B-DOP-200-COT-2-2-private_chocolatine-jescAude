##
## EPITECH PROJECT, 2024
## B-MAT-200-COT-2-2-bs108trigo-jessica.moussougan
## File description:
## Makefile
##

SRC		=       src/*.c

BIN     =       108trigo

all:
	gcc -lm $(SRC) -o $(BIN) -g3

clean:
	rm -rf *~
	rm -rf *#

fclean: clean
		rm -rf $(BIN)

re:	fclean all

style:
		clear
		coding-style . .
		cat coding-style-reports.log
		rm -rf coding-style-reports.log
