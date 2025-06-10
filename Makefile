CC = gcc
CFLAGS = -Wall -std=c99

TEST_TARGET = ConversionTest
MAIN_TARGET = TablasDeConversion

all: $(TEST_TARGET) $(MAIN_TARGET)

$(TEST_TARGET): Conversion.o ConversionTest.o
	$(CC) $(CFLAGS) -o $@ $^

$(MAIN_TARGET): Conversion.o TablasDeConversion.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c Conversion.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(TEST_TARGET) $(MAIN_TARGET)

.PHONY: all clean