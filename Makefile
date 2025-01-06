##
## EPITECH PROJECT, 2024
## makefile
## File description:
## make
# https://drive.google.com/file/d/1bWZnJtpXtPvIi17DPOkiplPl42cP705-/view?usp=sharing // système_de_pointage_manager
# https://drive.google.com/file/d/1TW6-8MamggNpg65lzd94hChk_dPVOqm7/view?usp=sharing // système_de_pointage_employé
# https://drive.google.com/file/d/1tA_onzAbyIz4j5c6-456DqE2k6RZYbik/view?usp=sharing // site_ecommerce_vendeur
# https://drive.google.com/file/d/1CazeVYnOtKvKPX3mMnCC2oNZYOIPx5OX/view?usp=sharing // site_ecommerce_acheteur

# https://drive.google.com/file/d/1LcVfYCGtNnCkDehJQjXYaJRrQNtA-EFO/view?usp=sharing // aller_plus_loin_avec_django
# https://drive.google.com/file/d/17KVS9fQsIWyoEzsJcZ4yCs60_AHiXuNX/view?usp=sharing // api_avec_django
# https://drive.google.com/file/d/1KVUb143WU38xQzyp2RKBkyoUe_cWcsNc/view?usp=sharing // découvrir_django
# https://drive.google.com/file/d/1mC4M4maEiAPULRTIZ4Xu7ThnqhV8Ts8d/view?usp=sharing // apprendre_poo
# https://drive.google.com/file/d/1zdB1QgMv_GW3NVeWp-0ha1wvQaMKeU0o/view?usp=sharing // apprendre_javascript
# https://drive.google.com/file/d/1yHXfJnhxiwt_9HLLU5z0iXleC_zU9DYF/view?usp=sharing // projet e-commerce
# https://drive.google.com/file/d/1Tg8ftIMuxHQn7RlFRCLMQrd_O8rZgJeb/view?usp=sharing // projet de pointage
# https://drive.google.com/file/d/16rKJe7EWrJIj6O1BrQ0gR7KIcByxnZvd/view?usp=sharing // règlement intérieur
# https://drive.google.com/file/d/1w4ZNkEL54mANQY4_eL9yW26HVrDz6s7k/view?usp=sharing // site web avec html et css
# https://drive.google.com/file/d/1PchiXJfqMKjr_jKZ0hrbivkfvWFyVB2a/view?usp=sharing // html et css mathieu nebra

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
