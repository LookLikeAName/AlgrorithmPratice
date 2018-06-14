#### Make tree ######
tree: config.h ./Tree/tree.h ./Tree/tree.cpp ./Tree/treeMain.cpp
	cd ./Tree && make clean && make tree
runTree: 
	cd ./bin && ./treeBin
treeClean:
	cd ./Tree && make clean