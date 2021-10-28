all: perimeter perimeter.c perimeter.h
    gcc -o perimeter.c perimeter.h
test:
    gcc -I tests/test.c perimeter.h
clean:
    rm -f perimeter