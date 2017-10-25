SYS_INC=/usr/include/
CPP_INC=/usr/include/c++/5.4.0/


default:HelloWorld.o 
	g++ -o HelloWorld HelloWorld.o 


HelloWorld.o:HelloWorld.cpp
	g++ -c -I$(SYS_INC)  -I$(CPP_INC) HelloWorld.cpp
.PHONY:clean	
clean:
	-rm *.o Bserver 2>/dev/null

