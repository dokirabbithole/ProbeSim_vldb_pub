/************************************************* 
Copyright:
Author: Yu Liu, Xiaodong He, Zhewei Wei
Date: 2017-12-25 
Libraries Required: 
	SFMT-1.4.1: A random number generator, which can be downloaded here:
	www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/SFMT
**************************************************/

#include "SimStruct.h"
#include "util.h"

void usage() {
	cerr << "./ProbeSim [-g <graph name>] [-e <eps, default 0.1>] [-q <query set>] [-d <output dir>]" << endl;
}

int check_inc(int i, int max) {
    if (i == max) {
        usage();
        exit(1);
    }
    return i + 1;
}

int main(int argc, char** argv){

	int i = 1;
	string file = "";
	string qf = "";
	string output_dir;
	vector<int> queryNode;
	double eps = 0.1;

	while (i < argc) {
        if (!strcmp(argv[i], "-g")) {
            i = check_inc(i, argc);
            file = argv[i];
        } else if (!strcmp(argv[i], "-q")) {
            i = check_inc(i, argc);
            qf = argv[i];
        } else if (!strcmp(argv[i], "-d")) {
            i = check_inc(i, argc);
            output_dir = argv[i];
        } else if (!strcmp(argv[i], "-e")) {
            i = check_inc(i, argc);
            eps = strtod(argv[i], nullptr);
        } 		
		else {
            usage();
            exit(1);
        }
        i++;
    }
	if(file == "" || qf == "")
	{
		usage();
		exit(1);
	}
	readfile(qf, queryNode);

	SimStruct sim = SimStruct(file, eps); 
	double total_t = 0;
	for(int i = 0; i < queryNode.size(); i++){	
		int nodeId = queryNode[i];
		cout << "node: " << nodeId << "\t";
		double t = sim.batch(nodeId, output_dir);
		cout << t << "s" << endl;
		total_t += t;
	}
	cout << "average probe time: " << total_t/(double)queryNode.size() << "s" << endl;
	return 0;
}