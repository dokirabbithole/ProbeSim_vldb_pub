<h1>ProbeSim: Scalable Single Source and Top-k SimRank Computations on Dynamic Graphs</h1>

<h3>Authors: Yu Liu (yu.liu@ruc.edu.cn), Zhewei Wei (zhewei@ruc.edu.cn)</h3>

<p>If you make use of this code in your work, please cite the following paper:</p>

<pre><code>@article{Liu2017Probesim,
  title={Probesim: scalable single-source and top- k simrank computations on dynamic graphs},
  author={Liu, Yu and Zheng, Bolong and He, Xiaodong and Wei, Zhewei and Xiao, Xiaokui and Zheng, Kai and Lu, Jiaheng},
  journal={Proceedings of the Vldb Endowment},
  volume={11},
  number={1},
  year={2017},
}
</code></pre>

<h2>Tested Enviroment</h2>

<p>Ubuntu 14.04.5 LTS </p>

<p>C++ 11</p>

<p>g++ 4.8.4</p>

<h2>Compile the code</h2>

<p>sh compile.sh</p>

<h2>Parameters</h2>

<p>-g \<edge file of the graph\></p>
<p>-e \<abosulute error\></p>
<p>-q \<query node list\></p>
<p>-d \<result directory\></p>

<h2>Run the example</h2>

<p>./ProbeSim -g dataset/toy_graph.txt -e 0.1 -q query/toy_graph.query -d result/toy_graph/</p>

<p>For any question of the code, please feel free to contact us.</p>