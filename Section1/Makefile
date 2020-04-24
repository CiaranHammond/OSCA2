#Task 1 - "The quick brown fox jumps over the lazy dog" word count
run-task-1: 
	printf 'The quick brown fox jumps over the lazy dog\n' | wc -w

#Task 2 - "The quick brown fox jumps over the lazy dog
run-task-2:
	printf 'The quick brown fox jumps over the lazy dog\n' | tr "[a-z]" "[A-Z]"

#Task 3
run-task-3:
	curl -o dkit.html https://www.dkit.ie

#Task 4
run-task-4:
	tail -n 1 dkit.html | tr "<>" "[]" >> mangled.txt && head -n 1 dkit.html | tr "<>" "[]" >> mangled.txt
