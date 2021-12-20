fdr1 = ./part1/
fdr2 = ./part2/
fdr3 = ./part3/
fdr4 = ./part4/
fdr5 = ./part5/
fdr6 = ./part6/
fdrb = ./bonuslst/

func1 = $(fdr1)part1.test
func1 += $(fdr1)ft_isalnum.test
func1 += $(fdr1)ft_isalpha.test
func1 += $(fdr1)ft_isxdigit.test
func1 += $(fdr1)ft_isascii.test
func1 += $(fdr1)ft_isdigit.test 
func1 += $(fdr1)ft_isoctal.test
func1 += $(fdr1)ft_isprint.test
func1 += $(fdr1)ft_strlen.test
func1 += $(fdr1)ft_isspace.test
func1 += $(fdr1)tools.test

func2 = $(fdr2)part2.test
func2 += $(fdr2)ft_bzero.test
func2 += $(fdr2)ft_memchr.test
func2 += $(fdr2)ft_strchr.test
func2 += $(fdr2)ft_strrchr.test
func2 += $(fdr2)ft_tolower.test
func2 += $(fdr2)ft_toupper.test
func2 += $(fdr2)tools.test

func3 = $(fdr3)part3.test
func3 += $(fdr3)ft_memcmp.test
func3 += $(fdr3)ft_memcpy.test
func3 += $(fdr3)ft_memmove.test
func3 += $(fdr3)ft_strcat.test
func3 += $(fdr3)ft_strcmp.test
func3 += $(fdr3)ft_strcpy.test
func3 += $(fdr3)ft_strstr.test
func3 += $(fdr2)tools.test

func4 = $(fdr4)part4.test
func4 += $(fdr4)ft_atoi.test
func4 += $(fdr4)ft_memccpy.test
func4 += $(fdr4)ft_strdup.test
func4 += $(fdr4)ft_strlcat.test
func4 += $(fdr4)ft_strncmp.test
func4 += $(fdr4)ft_strncat.test
func4 += $(fdr4)ft_strncpy.test
func4 += $(fdr4)ft_strnstr.test
func4 += $(fdr2)tools.test

func5 = $(fdr5)part5.test
func5 += $(fdr5)ft_memalloc.test
func5 += $(fdr5)ft_putchar.test
func5 += $(fdr5)ft_putstr.test
func5 += $(fdr5)ft_putendl.test
func5 += $(fdr5)ft_putnbr.test
func5 += $(fdr5)ft_strnew.test
func5 += $(fdr5)ft_strdel.test
func5 += $(fdr5)ft_strclr.test
func5 += $(fdr5)ft_strequ.test
func5 += $(fdr5)ft_strnequ.test
func5 += $(fdr5)ft_strsub.test
func5 += $(fdr5)ft_strjoin.test
func5 += $(fdr5)ft_putchar_fd.test
func5 += $(fdr5)ft_putstr_fd.test
func5 += $(fdr5)ft_putendl_fd.test
func5 += $(fdr5)ft_putnbr_fd.test
func5 += $(fdr2)tools.test

func6 = $(fdr6)part6.test
func6 += $(fdr6)ft_itoa.test
func6 += $(fdr6)ft_memdel.test
func6 += $(fdr6)ft_striter.test
func6 += $(fdr6)ft_striteri.test
func6 += $(fdr6)ft_strmap.test
func6 += $(fdr6)ft_strmapi.test
func6 += $(fdr6)ft_strsplit.test
func6 += $(fdr6)ft_strtrim.test
func6 += $(fdr6)ft_memset.test
func6 += $(fdr2)tools.test

funcb = $(fdrb)bonuslst.test
funcb += $(fdr2)tools.test

MAKELIB = make -C ../ fclean && make -C ../
COMP = gcc -Wall -Wextra -Werror
LIBR = -I.. -L.. -lft

lib:
	$(MAKELIB)

t1:
	@$(COMP) $(LIBR) -x c $(func1) -o t1.out

t2:
	@$(COMP) $(LIBR) -x c $(func2) -o t2.out

t3:
	@$(COMP) $(LIBR) -x c $(func3) -o t3.out

t4:
	@$(COMP) $(LIBR) -x c $(func4) -o t4.out

t5:
	@$(COMP) $(LIBR) -x c $(func5) -o t5.out

t6:
	@$(COMP) $(LIBR) -x c $(func6) -o t6.out

b:
	@$(COMP) $(LIBR) -x c $(funcb) -o b.out

al: t1 t2 t3 t4 t5 t6 b

all: lib t1 t2 t3 t4 t5 t6 b

clean:
	/bin/rm -f *.out

re: clean all

.PHONY: all clean fclean re
