V_CC = @echo "Building $@..."; $(CC)
AT = @

LIBRARY	= libftprintf.a
FLAGS	= -Wall -Werror -Wextra
C_LIBFT = \
	ft_printf.c			\
	ft_putnbr_base.c	\
	ft_strchr.c			\
	tools.c				\
	ft_print_address.c	

O_FILES = $(C_LIBFT:.c=.o)

INCLUDES = ft_printf.h 

all: $(LIBRARY) 

$(LIBRARY): $(O_FILES)
	@echo creating library	
	$(AT)-ar -rcs $(LIBRARY) $(O_FILES) $(INCLUDES)
	$(AT)-ranlib $(LIBRARY)

%.o: %.c $(INCLUDES) Makefile
	$(V_CC) -c $(FLAGS) $< -o $@
	
clean:
	@echo Removing object files
	$(AT)-rm -f *.o	 
fclean:
	@echo Removing object files
	$(AT)-rm -f *.o	 
	@echo Removing application
	$(AT)-rm -f $(LIBRARY)

re: fclean all	

.PHONY: all clean fclean
.DEFAULT: all
