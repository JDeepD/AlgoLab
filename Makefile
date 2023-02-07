CC = gcc
DIR = dist
DAY = day2
SRCS := main.c $(wildcard $(DAY)/*.c) $(wildcard utils/*.c)
OBJS := $(SRCS:.c=.o)
OBJS := $(addprefix $(DIR)/, $(OBJS))

compile: $(OBJS)
	@$(CC) $(OBJS) -o a.exe
	@echo Output:
	@./a.exe

$(DIR)/main.o : main.c
	@mkdir -p $(DIR) 
	@$(CC) -c main.c -o $(DIR)/main.o

$(DIR)/$(DAY)/%.o: $(DAY)/%.c
	@mkdir -p $(DIR)/$(DAY)
	@$(CC) -c $< -o $@

$(DIR)/utils/%.o : utils/%.c
	@mkdir -p $(DIR)/utils
	@$(CC) -c $< -o $@

clean:
	rm -rf dist/$(DAY)/*