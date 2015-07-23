CPPFLAGS += -std=c++0x -g
LDFLAGS += -lleveldb -lboost_serialization -lboost_system -lglog -llmdb -lboost_filesystem -lz
LIBS += -L ~/software/leveldb/ -L /srv2/rgirdhar/Software/cpp/boost_1_57_0/stage/lib/ -L/srv2/rgirdhar/Software/cpp/zlib/install/lib/
INC += -I ~/software/leveldb/include/ -I /srv2/rgirdhar/Software/cpp/boost_1_57_0/ -I/srv2/rgirdhar/Software/cpp/zlib/install/include/

all: main.bin read.bin trymap.bin

%.bin: %.cpp DiskVector.hpp DiskVectorLMDB.hpp
	$(CXX) \
		$(CPPFLAGS) \
		$(INC) \
		$< -o $@ \
		$(LIBS) \
		$(LDFLAGS) \
		-O2

