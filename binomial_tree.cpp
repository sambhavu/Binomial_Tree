

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std; 



vector< vector<double> > binomial_tree( double S0,
                                        double u,
                                        double d,
                                        int no_steps){
    vector<vector<double>>tree;
    for(int i = 1; i<=no_steps;++i){
        vector<double> S(i);
        for(int j = 0;j<i;++j){
            S[j] = S0*pow(u,j)*pow(d,i-j-1);
        };
        tree.push_back(S);
    }
    return tree;
                                        };
int main(){

vector<vector<double>> t;

t=binomial_tree(100,34
,7,1000);


return0;
}
