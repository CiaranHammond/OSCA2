#Task 1
run-task-1:
	tail -n10 access.log

#Task 2
run-task-2:
	cut -d ' ' -f 1 access.log | sort -n | uniq

#Task 3
run-task-3:
	grep "404 " access.log | cut -d ' ' -f 3,4,5

#Task 4
run-task-4:
	grep MSIE access.log > access.ie.log

#Task 5
run-task-5:
	egrep '[5-9] "|1[0-9] "' access.log | cut -d ' ' -f 3,4,5 | sort | uniq -c
