bin/proFile: src/recruitEmployee.o src/printAll.o src/printOne.o src/lookOnId.o src/lookOnFullName.o src/swapEmployees.o src/sortEmployeesId.o src/helperA3.o src/countEmployees.o src/fireAll.o src/fireOne.o
	gcc -std=c99 -Wall src/recruitEmployee.o src/printAll.o src/printOne.o src/lookOnId.o src/lookOnFullName.o src/swapEmployees.o src/sortEmployeesId.o src/helperA3.o src/countEmployees.o src/fireAll.o src/fireOne.o -o bin/proFile

src/recruitEmployee.o: src/recruitEmployee.c include/headerA3.h
	gcc -std=c99 -Wall -c src/recruitEmployee.c -o src/recruitEmployee.o

src/printAll.o: src/printAll.c include/headerA3.h
	gcc -std=c99 -Wall -c src/printAll.c -o src/printAll.o

src/printOne.o: src/printOne.c include/headerA3.h
	gcc -std=c99 -Wall -c src/printOne.c -o src/printOne.o

src/lookOnId.o: src/lookOnId.c include/headerA3.h
	gcc -std=c99 -Wall -c src/lookOnId.c -o src/lookOnId.o

src/lookOnFullName.o: src/lookOnFullName.c include/headerA3.h
	gcc -std=c99 -Wall -c src/lookOnFullName.c -o src/lookOnFullName.o

src/swapEmployees.o: src/swapEmployees.c include/headerA3.h
	gcc -std=c99 -Wall -c src/swapEmployees.c -o src/swapEmployees.o

src/sortEmployeesId.o: src/sortEmployeesId.c include/headerA3.h
	gcc -std=c99 -Wall -c src/sortEmployeesId.c -o src/sortEmployeesId.o

src/helperA3.o: src/helperA3.c include/headerA3.h
	gcc -std=c99 -Wall -c src/helperA3.c -o src/helperA3.o

src/countEmployees.o: src/countEmployees.c include/headerA3.h
	gcc -std=c99 -Wall -c src/countEmployees.c -o src/countEmployees.o

src/fireAll.o: src/fireAll.c include/headerA3.h
	gcc -std=c99 -Wall -c src/fireAll.c -o src/fireAll.o

src/fireOne.o: src/fireOne.c include/headerA3.h
	gcc -std=c99 -Wall -c src/fireOne.c -o src/fireOne.o

clean:
	rm src/*.o proFile
