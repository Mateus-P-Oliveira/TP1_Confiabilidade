CFLAGS = -Wall -g -fprofile-arcs -ftest-coverage
SRCS = src/quick_sort.c src/merge_sort.c src/heap_sort.c src/selection_sort.c src/insertion_sort.c src/bubble_sort.c src/radix_sort.c src/counting_sort.c src/sort.c main.c

all: 
	gcc $(CFLAGS) -o app $(SRCS)

coverage:
	gcov -o app $(SRCS)

gcovr-report:
	mkdir -p gcovr-report
	gcovr --root . --html --html-details --output gcovr-report/coverage.html

valgrind:
	valgrind ./app

cppcheck:
	cppcheck --enable=all --inconclusive --suppress=missingIncludeSystem $(SRCS)

deps:
	pip install gcovr
	sudo apt install valgrind cppcheck
	
clean:
	rm -f app
