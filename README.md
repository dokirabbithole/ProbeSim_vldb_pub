<h1>ProbeSim: Scalable Single Source and Top-k SimRank Computations on Dynamic Graphs</h1>

<h3>Authors: Yu Liu (yu.liu@ruc.edu.cn), Zhewei Wei (zhewei@ruc.edu.cn)</h3>

<h2>Compile the code:</h2>

<p>g++ -march=core2 -pthread -std=c++11 -DSFMT_MEXP=607 -I SFMT-src-1.4.1 -O3 -o ProbeSim SFMT-src-1.4.1/SFMT.c main.cpp</p>

<h2>Run the example:</h2>

<p>./ProbeSim -g dataset/toy_graph.txt -e 0.1 -q query/toy_graph.query -d result/toy_graph/</p>

<p>For any question of the code, please feel free to contact us.</p>