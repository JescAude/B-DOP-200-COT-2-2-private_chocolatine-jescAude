##
## EPITECH PROJECT, 2024
## makefile
## File description:
## make
# https://drive.google.com/file/d/1bWZnJtpXtPvIi17DPOkiplPl42cP705-/view?usp=sharing // système_de_pointage_manager
# https://drive.google.com/file/d/1TW6-8MamggNpg65lzd94hChk_dPVOqm7/view?usp=sharing // système_de_pointage_employé
# https://drive.google.com/file/d/1tA_onzAbyIz4j5c6-456DqE2k6RZYbik/view?usp=sharing // site_ecommerce_vendeur
# https://drive.google.com/file/d/1CazeVYnOtKvKPX3mMnCC2oNZYOIPx5OX/view?usp=sharing // site_ecommerce_acheteur
SRC1    =       src/*.c
SRC2    =       src/velocity.c\
                src/coordinates.c\
                src/incidence_angle.c\

TEST    =       tests/test_my_101_pong_game.c

BIN1    =       101pong

BIN2    =       unit_tests

all:
	gcc -lm $(SRC1) -o $(BIN1)

test_units:
	gcc -lm $(SRC2) -o $(BIN2) $(TEST) --coverage -lcriterion

tests_run:	test_units
		./$(BIN2)

clean:
	rm -rf *~
	rm -rf *#
	rm -rf *.gcda
	rm -rf *.gcno

fclean: clean
	rm -rf $(BIN1)
	rm -rf $(BIN2)

re:	fclean all
