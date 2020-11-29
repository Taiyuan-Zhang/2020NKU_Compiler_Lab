all:ex1 ex2
.PHONY:all
ex1:ex1.tab.c
	gcc -o ex1 ex1.tab.c
ex1.tab.c:ex1.y
	bison -d ex1.y
ex2:ex2.tab.c
	gcc -o ex2 ex2.tab.c
ex2.tab.c:ex2.y
	bison -d ex2.y


