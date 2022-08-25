/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 02:44:05 by kymayang          #+#    #+#             */
/*   Updated: 2022/08/16 14:10:09 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kymayang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:36:49 by kymayang          #+#    #+#             */
/*   Updated: 2022/08/07 02:43:51 by kymayang         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{

	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;

	}
	if( nb >= 10 )
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if(nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

int	ft_check_null_terminating(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (src[i] == '\0')
		return (1);
	return (0);
}

int main(void)
{
	// ==================== exercice 0 ==================== 
	printf("\n========== ex00: ft_strcpy ==========\n");
	char src_strcpy[] = "kylian";
	char dest_strcpy1[7] = "";
	char dest_strcpy2[7] = "";
	
	printf("fonction de base : %s \n", strcpy(dest_strcpy1, src_strcpy));
	printf("ma fonction  	 : %s \n\n", ft_strcpy(dest_strcpy2, src_strcpy));

	printf("longueur de la fonction original : %d \n", ft_strlen(dest_strcpy1));
	printf("longueur de ma         fonction  : %d \n", ft_strlen(dest_strcpy1));

	printf("si la string contient le caractere de fin de chaine 1 doit sortir ==> %d \n", ft_check_null_terminating(dest_strcpy2));

	// ==================== exercice 1 ==================== 
	
	int size = 10;
	int i;

	printf("\n========== ex01: ft_strncpy.c ==========\n");

	char src_strncpy[] = "ky";
	char dest_strncpy1[20] = "viownwioj";
	char dest_strncpy2[20] = "";
	i = ft_strlen(src_strncpy);

	printf("fonction de base : %s \n", strncpy(dest_strncpy1, src_strncpy, size));
	printf("ma fonction 	 : %s \n", ft_strncpy(dest_strncpy2, src_strncpy, size));
	while (i < size)
	{
		if(dest_strncpy2[i] == '\0')
		{
			printf("=====> good\n");
		}
		i++;
	}


	// ==================== exercice 2 ==================== 
	printf("\n========== ex02: ft_str_is_alpha.c ==========\n");

	printf("\n == test1 ==\n");
	printf("Test with a the result should be 1  your result is: %d\n",	ft_str_is_alpha("a"));
	printf("\n == test2 ==\n");
	printf("Test with \255 the result should be 0  your result is: %d\n",	ft_str_is_alpha("\255"));
	printf("\n == test3 ==\n");
	printf("Test with kymayang the result should be 1  your result is: %d\n",	ft_str_is_alpha("kymayang"));
	printf("\n == test4 ==\n");
	printf("Test with kymayang\220 the result should be 0  your result is: %d\n",	ft_str_is_alpha("kymayang\220"));
	printf("\n == test5 ==\n");
	printf("Test with z the result should be 1  your result is: %d\n",	ft_str_is_alpha("z"));
	printf("\n == test6 ==\n");
	printf("Test with A the result should be 1  your result is: %d\n",	ft_str_is_alpha("A"));
	printf("\n == test7 ==\n");
	printf("Test with Z the result should be 1  your result is: %d\n",	ft_str_is_alpha("Z"));


	// ==================== exercice 3 ==================== 
	printf("\n========== ex03: ft_str_is_numeric.c ==========\n");

	printf("\n == test1 ==\n");
	printf("Test with <42> the result should be 1 your result is: %d\n",	ft_str_is_numeric("42"));
	printf("\n == test2 ==\n");
	printf("Test with < 42 > the result should be 0 your result is: %d\n",	ft_str_is_numeric(" 42 "));
	printf("\n == test3 ==\n");
	printf("Test with < > the result should be 0 your result is: %d\n",	ft_str_is_numeric(" "));
	printf("\n == test4 ==\n");
	printf("Test with <kymayang> the result should be 0 your result is: %d\n",	ft_str_is_numeric("kymayang"));
	printf("\n == test5 ==\n");
	printf("Test with <0> the result should be 1 your result is: %d\n",	ft_str_is_numeric("0"));
	printf("\n == test6 ==\n");
	printf("Test with <9> the result should be 1 your result is: %d\n",	ft_str_is_numeric("9"));
	

	// ==================== exercice 4 ==================== 
	printf("\n========== ex04: ft_str_is_lowercase.c ==========\n");

	printf("\n == test1 ==\n");
	printf("Test with <A> the result should be 0 your result is: %d\n",	ft_str_is_lowercase("A"));
	printf("\n == test2 ==\n");
	printf("Test with <a> the result should be 1 your result is: %d\n",	ft_str_is_lowercase("a"));
	printf("\n == test3 ==\n");
	printf("Test with <C> the result should be 0 your result is: %d\n",	ft_str_is_lowercase("C"));
	printf("\n == test4 ==\n");
	printf("Test with <Coaoij> the result should be 0 your result is: %d\n",	ft_str_is_lowercase("Coaoij"));
	printf("\n == test5 ==\n");
	printf("Test with <oaoij> the result should be 1 your result is: %d\n",	ft_str_is_lowercase("oaoij"));
	printf("\n == test6 ==\n");
	printf("Test with <> the result should be 1 your result is: %d\n",	ft_str_is_uppercase(""));

	// ==================== exercice 5 ==================== 
	printf("\n========== ex05: ft_str_is_uppercase.c ==========\n");
	
	printf("\n == test1 ==\n");
	printf("Test with <A> the result should be 1 your result is: %d\n",	ft_str_is_uppercase("A"));
	printf("\n == test2 ==\n");
	printf("Test with <a> the result should be 0 your result is: %d\n",	ft_str_is_uppercase("a"));
	printf("\n == test3 ==\n");
	printf("Test with <C> the result should be 1 your result is: %d\n",	ft_str_is_uppercase("C"));
	printf("\n == test4 ==\n");
	printf("Test with <Coaoij> the result should be 0 your result is: %d\n", ft_str_is_uppercase("Coaoij"));
	printf("\n == test5 ==\n");
	printf("Test with <oaoij> the result should be 0 your result is: %d\n",	ft_str_is_uppercase("oaoij"));
	printf("\n == test6 ==\n");
	printf("Test with < > the result should be 0 your result is: %d\n",	ft_str_is_uppercase(" "));
	printf("\n == test7 ==\n");
	printf("Test with <> the result should be 1 your result is: %d\n",	ft_str_is_uppercase(""));

	// ==================== exercice 6 ==================== 
	printf("\n========== ex06: ft_str_is_printable.c ==========\n");

	printf("\n == test1 ==\n");
	printf("Test with <> the result should be 1 your result is: %d\n",	ft_str_is_printable(""));
	printf("\n == test2 ==\n");
	printf("Test with <\\31> the result should be 0 your result is: %d\n",	ft_str_is_printable("\31"));
	printf("\n == test3 ==\n");
	printf("Test with <!> the result should be 1 your result is: %d\n",	ft_str_is_printable("!"));
	printf("\n == test4 ==\n");
	printf("Test with <afljie> the result should be 1 your result is: %d\n",	ft_str_is_printable("afljie"));
	printf("\n == test5==\n");
	printf("Test with <a\\2fljie> the result should be 0 your result is: %d\n",	ft_str_is_printable("a\2fljie"));
	printf("\n == test6==\n");
	char a = 127;
	printf("Test with <\\127> the result should be 0 your result is: %d\n",	ft_str_is_printable(&a));
	printf("\n == test7==\n");
	printf("Test with <\\1> the result should be 0 your result is: %d\n",	ft_str_is_printable("\1"));
	printf("\n == test8==\n");
	printf("Test with <\\256> the result should be 0 your result is: %d\n",	ft_str_is_printable("\256"));

	// ==================== exercice 7 ==================== 
	printf("\n========== ex07: ft_strupcase.c ==========\n");

	char strupcase_string[] = "kymayanga";
	char strupcase_string1[] = "kym23ayanga";
	ft_strupcase(strupcase_string);
	ft_strupcase(strupcase_string1);

	printf("\n == test1 ==\n");
	printf("I should get KYMAYANG: %s\n",	strupcase_string);
	printf("\n == test2 ==\n");
	printf("I should get KYM23AYANG: %s\n",	strupcase_string1);



	// ==================== exercice 8 ==================== 
	printf("\n========== ex08: ft_strlowcase.c ==========\n");

	ft_strlowcase(strupcase_string);
	ft_strlowcase(strupcase_string1);
	printf("\n == test1 ==\n");
	printf("I should get kymayang: %s\n",	strupcase_string);
	printf("\n == test2 ==\n");
	printf("I should get ky23mayang: %s\n",	strupcase_string1);


	// ==================== exercice 9 ==================== 
	printf("\n========== ex09: ft_strcapitalize.c ==========\n");

	char capitalize_string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(capitalize_string);

	printf("I should get: Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
	printf("I have      : %s", capitalize_string);


	// ==================== exercice 10 ==================== 
	printf("\n========== ex09: ft_strlcpy.c ==========\n");

	//test 1
	printf("\n== test 1 ==\n");
	printf("\ntest avec size < taille dest :\n\n");
	char tab_strlcpy[13] = "kylian ";
	char tab_strlcpy1[13] = "kylian ";
	char tab_strlcpy2[] = "le plus beau";

	int size_strlcpy = 10;

	printf("Length of the origianl attempt: %lu \n", strlcpy(tab_strlcpy, tab_strlcpy2, size_strlcpy));
	printf("Length of my function         : %u", ft_strlcpy(tab_strlcpy1, tab_strlcpy2, size_strlcpy));

	printf("\n");

	printf("The expected string: %s\n", tab_strlcpy);
	printf("My String          : %s\n", tab_strlcpy1);

	//test 2
	printf("\n== test 2 ==\n");
	printf("\ntest avec size == taille dest :\n\n");

	char tab_strlcpy3[8] = "";
	char tab_strlcpy4[8] = "";
	char source_tab_strlcpy2[] = "kymayang";

	size_strlcpy = 7;

	printf("Length of the original attempt: %lu \n", strlcpy(tab_strlcpy3, source_tab_strlcpy2, size_strlcpy));
	printf("Length of my function         : %u", ft_strlcpy(tab_strlcpy4, source_tab_strlcpy2, size_strlcpy));

	printf("\n");

	printf("The expected string: %s\n", tab_strlcpy3);
	printf("My String          : %s\n", tab_strlcpy4);
	
	//test 3
	printf("\n== test 3 ==\n");

	printf("if \\0 is put it should equal 1 ==> %d\n", ft_check_null_terminating(tab_strlcpy4));

// 	// ==================== exercice 10 ==================== 
// 	printf("\n========== ex10: ft_strlcpy.c ==========\n");

// 	char non_printable_string[] = "Coucou \n tu vas bien ?";

// 	//test 1
// 	printf("\n== test 1 ==\n");
// 	printf("test with \\n \n");

// 	printf("I should get : Coucou \\0a tu vas bien ?\n");
// 	ft_putstr("I have    : ");
// 	ft_putstr_non_printable(non_printable_string);

// 	//test 2
// 	//	char non_printable_string1[] = 10;
// 	printf("\n\n== test 2 ==\n");
// 	ft_putstr("I have    : ");
// 	i = 0;
// 	while (i < 300)
// 	{
// 		char c = i;
// 		if ( i < 32 || i > 127 )
// 			ft_putstr_non_printable(&c);
// 		i++;
// 	}
}
