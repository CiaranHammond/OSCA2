OUTPUT = egrep "^\#([a-fA-F0-9]{6}|[a-fA-F0-9]{8})" colours.txt | cut -c 4,5 | tr "\n" ", "> green.txt

#Compile Task 2
gcc-task2:
	gcc Task2.c -o Task2
	
#Task 1
run-task-1:
	egrep "^#([a-fA-F0-9]{6}|[a-fA-F0-9]{8})" colours.txt

#Task 2
run-task-2:
	${OUTPUT} && gcc Task2.c -o Task2 && ./Task2
