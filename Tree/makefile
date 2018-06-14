#### MakeFile for tree ######

tree: treeMain.o tree.o tree.h
	g++ -o ../bin/treeBin treeMain.o tree.o

treeMain.o: 
	 g++ --std=gnu++0x -c treeMain.cpp

tree.o: 
	g++ --std=gnu++0x -c tree.cpp

clean:
	rm -f *.o 
	
