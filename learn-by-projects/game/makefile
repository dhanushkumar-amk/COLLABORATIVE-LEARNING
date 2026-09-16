CC = clang

CFLAGS = -I/opt/homebrew/opt/raylib/include

LDFLAGS = -L/opt/homebrew/opt/raylib/lib

LIBS = -lraylib \
       -framework OpenGL \
       -framework Cocoa \
       -framework IOKit \
       -framework CoreVideo

TARGET = game

SRC = main.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS) $(LIBS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
