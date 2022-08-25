# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 14:23:59 by gd-harco          #+#    #+#              #
#    Updated: 2022/08/21 23:43:46 by gd-harco         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# syntaxe "nom_de_regle: regle a executer avant "
#				"commande de la regle"


CC = gcc
CFLAGS = -Werror -Wall -Wextra
LDFLAGS =
EXEC = rush-02

all : $(EXEC)

rush-02 : "main.o" "check_number_in_arg.o" "string.o" "get_strs.o" "print_final_number.o" "print_number_parts.o" "print_number_parts2.o" "parse.o" "put_dictionary_in_str.o" "check_dictionay.o" "parse2.o" "print_final_number2.o" "get_strs.o"

	main.o : main.c
		$(CC) -o &@ -c &< $(CFLAGS)

	check_number_in_arg.o : fcheck_number_in_arg.c
		$(CC) -o &@ -c &< $(CFLAGS)

	get_strs.o : get_strs.c
		$(CC) -o &@ -c &< $(CFLAGS)

	print_final_number2.o : print_final_number2.c
		$(CC) -o &@ -c &< $(CFLAGS)

	parse.o : parse.c
		$(CC) -o &@ -c &< $(CFLAGS)

	put_dictionary_in_str.o : put_dictionary_in_str.c
		$(CC) -o &@ -c &< $(CFLAGS)

	check_dictionay.o : check_dictionay.c
		$(CC) -o &@ -c &< $(CFLAGS)

	parse2.o : parse2.c
		$(CC) -o &@ -c &< $(CFLAGS)
	
	get_strs.o : get_str.c
		$(CC) -o &@ -c &< $(CFLAGS)

	print_final_number.o : print_final_number.c
		$(CC) -o &@ -c &< $(CFLAGS)
		
	print_final_number2.o : print_final_number2.c
		$(CC) -o &@ -c &< $(CFLAGS)
clean :
	rm -rf *.o

mrproper :
	rm -rf $(EXEC)
