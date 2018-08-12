ProbeSim: Scalable Single Source and Top-k SimRank Computations on Dynamic Graphs
Authors: Yu Liu (yu.liu@ruc.edu.cn), Zhewei Wei (zhewei@ruc.edu.cn)
Compile the code:
g++ -march=core2 -pthread -std=c++11 -DSFMT_MEXP=607 -I SFMT-src-1.4.1 -O3 -o ProbeSim SFMT-src-1.4.1/SFMT.c main.cpp
Run the example:
./ProbeSim -g dataset/toy_graph.txt -e 0.1 -q query/toy_graph.query -d result/toy_graph/

For any question of the code, please feel free to contact us.