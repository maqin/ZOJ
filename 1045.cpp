#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    double d;
    while(cin>>d, d){
        int res = 1;
        while(d>0){
            double begin = 1.0/(res+1);
            d -= begin;
            res++;
        }

        printf("%d card(s)\n",res-1);
    }
    return 0;
}
