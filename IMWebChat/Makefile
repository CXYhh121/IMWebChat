cc=g++
bin=ImServer
src=ImServer.cc mongoose/mongoose.c
include=-Imongoose/ -Imysql/include 
lib=-Lmysql/lib 
lib_name=-lmysqlclient -ljsoncpp #-lpthread -ldl -static

$(bin):$(src)
	$(cc) -Wall -o $@ $^ $(include) $(lib) $(lib_name)  -std=c++11 -g
.PHONY:clean
clean:
	rm -f $(bin)

