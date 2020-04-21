#include<algorithm>
#include<cmath>
#include<iostream>
#include<vector>
using namespace std;



vector< vector<double> > binomial_tree(){

    double S0=100;

    double move=1.0;

    int steps=5;

    double p_up=.5;

    double p_down=.5;

    vector<vector<double>>tree;

    for(int i = 1; i<=no_steps;++i){

        vector<double> S(i);

        for(int j = 0;j<i;++j){

            S[j]=S0-(i*move)+j*move;
        };

        tree.push_back(S);
    }
    return tree;
                                


int main(){

return 0;
}
