CFLAGS = -Wall -g -fprofile-arcs -ftest-coverage -fsanitize=undefined -fno-omit-frame-pointer -fsanitize=float-cast-overflow -fno-sanitize=null -fno-sanitize=alignment -fsanitize=float-divide-by-zero
SRCS = src/quick_sort.c src/merge_sort.c src/heap_sort.c src/selection_sort.c src/insertion_sort.c src/bubble_sort.c src/radix_sort.c src/counting_sort.c src/sort.c main.c
TESTS = src/quick_sort.c src/merge_sort.c src/heap_sort.c src/selection_sort.c src/insertion_sort.c src/bubble_sort.c src/radix_sort.c src/counting_sort.c src/sort.c unity/unity.c tests/testes1.c

all: 
	gcc $(CFLAGS) -o app $(SRCS)

coverage:
	gcov -o app $(SRCS)
	gcov -b *.gcno

gcovr-report:
	mkdir -p gcovr-report
	gcovr --root . --html --html-details --output gcovr-report/coverage.html

valgrind:
	valgrind -s --track-origins=yes --leak-check=full ./app

cppcheck:
	cppcheck --enable=all --inconclusive $(SRCS)

deps:
	pip install gcovr
	sudo apt install valgrind cppcheck

testes: 
	gcc -o test_app $(TESTS) 
	./test_app

clean:
	rm -f app test_app
	rm -rf *.gcno
	rm -rf *.gcda