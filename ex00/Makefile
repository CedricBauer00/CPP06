NAME = Converter
SRC = src/main.cpp \
		src/ScalarConverter.cpp \
		src/DataTypesCheck.cpp \
		src/ConvertFuncs.cpp

OBJ := $(SRC:%.cpp=%.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) > /dev/null 2>&1 && echo "\033[32mCompilation successful!\033[0m"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

fclean:
	@rm -f $(NAME) $(OBJ) > /dev/null && echo "\033[31mProgramm cleared successfully!\033[0m"

re: fclean all

.PHONY: all fclean re