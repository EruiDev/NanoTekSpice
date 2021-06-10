##
## EPITECH PROJECT, 2020
## makefile
## File description:
## test
##

PSRC	=	src/
PSRC_E	=	src/Exceptions/
PSRC_U	=	src/Utils/
PSRC_C_C	=	src/Components/Chips/
PSRC_C_P	=	src/Components/Pins/
PSRC_C_D	=	src/Components/Data/
PSRC_C_S	=	src/Components/States/
PSRC_C	=	src/Components/
PSRC_CO	=	src/Circuit/
PSRC_P	=	src/Parsing/

SRC	=     main.cpp \

SRC_E	=	ChipsetMissingException.cpp \
			ComponentDuplicateException.cpp \
			ComponentNameException.cpp \
			ComponentTypeException.cpp \
			InputException.cpp \
			MainException.cpp \
			PinException.cpp \
			SyntaxException.cpp \


SRC_U	=	Utils.cpp \
			Logic.cpp \

SRC_C	=	Factory.cpp \

SRC_C_C	=	4001.cpp \
			4011.cpp \
			4030.cpp \
			4069.cpp \
			4071.cpp \
			4081.cpp \

SRC_C_P =	Pin.cpp \
			PinMap.cpp \
			InputPin.cpp \
			OutputPin.cpp \

SRC_C_D =	Input.cpp \
			Output.cpp \
			Clock.cpp \

SRC_C_S	=	True.cpp \
            False.cpp \

SRC_CO	=	Circuit.cpp \

SRC_P	=	Parsing.cpp \

SRCS	+=	$(addprefix $(PSRC), $(SRC))
SRCS	+=	$(addprefix $(PSRC_E), $(SRC_E))
SRCS	+=	$(addprefix $(PSRC_U), $(SRC_U))
SRCS	+=	$(addprefix $(PSRC_C_C), $(SRC_C_C))
SRCS	+=	$(addprefix $(PSRC_C_P), $(SRC_C_P))
SRCS	+=	$(addprefix $(PSRC_C_D), $(SRC_C_D))
SRCS	+=	$(addprefix $(PSRC_C_S), $(SRC_C_S))
SRCS	+=	$(addprefix $(PSRC_C), $(SRC_C))
SRCS	+=	$(addprefix $(PSRC_CO), $(SRC_CO))
SRCS	+=	$(addprefix $(PSRC_P), $(SRC_P))

CXXFLAGS	+=	-I ./include/ -I ./include/Exceptions
CXXFLAGS	+=	-I ./include/Utils -I ./include/Components/Chips
CXXFLAGS	+=	-I ./include/Components/Pins -I ./include/Components
CXXFLAGS	+=	-I ./include/Circuit -I ./include/Parsing
CXXFLAGS	+=	-I ./include/Components/Data -I ./include/Components/States

OBJ	=	$(SRCS:.cpp=.o)

NAME	=	nanotekspice

all:	$(NAME)

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all