##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Task of pool
##

TOINCLUDE	=	lib/my/my.h \
				lib/my/create_struct.h

MAINFILE	=	main.c

BINNAME		=	main

LIBNAME		=	lib/my/libmy.a

OBJ			=	$(MAINFILE:.c=.o)

LIB			=	-L./lib/my -lmy

INCF		=	include

FLAGS		=	-I./$(INCF)/

all: $(BINNAME)

$(INCF):
	mkdir -p $(INCF)
	cp $(TOINCLUDE) $(INCF)

$(LIBNAME):
	@make -C lib/my/ -w

$(BINNAME):  $(INCF) $(LIBNAME)
	gcc -o $(BINNAME) $(MAINFILE) $(LIB) $(FLAGS)
	@if [ -f $(BINNAME) ]; then \
		echo -e "\033[92m\nFile succesfully compiled\n\033[0m" ; \
	fi

clean:
	@make -C lib/my/ clean
	@if [ ! -f lib/my/*.o ]; then \
		echo -e "\033[92m\nClean succesfully done\n\033[0m" ; \
	fi

fclean: clean
	rm -f $(BINNAME)
	rm -rf $(INCF)
	rm -f $(LIBNAME)
	@if [ ! -f $(BINNAME) ] && [ ! -f $(LIBNAME) ] && [ ! -d $(INCF) ]; then \
		echo -e "\033[92m\nFclean succesfully done\n\033[0m" ; \
	fi

re: fclean all
