CC = cc
CFLAGS = -Iinclude
LDFLAGS = -Llib
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

default:
	$(CC) main.c $(CFLAGS) $(LDFLAGS) $(LIBS) -o snake
