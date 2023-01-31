CC = gcc
DIR = dist
DAY = day1
SRCS := main.c $(wildcard $(DAY)/*.c)  
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

clean:
	rm -rf dist/$(DAY)/*