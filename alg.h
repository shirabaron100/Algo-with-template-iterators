#pragma once
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std;

template <typename T> 
T Add_n(T it_begin, T it_end ,int n)
{
T runner=it_begin;
T input=it_begin;
int i=0;
if(it_end-it_begin==0)
return it_end;
while (runner!=it_end)
{
    auto sum=*runner;
    runner++;
    i=2;
    while ((i<=n)&&(runner!=it_end))
    {
        i++;
        sum+=*runner;
        runner++;
    }
    *input=sum;
    input++;
    sum=0;
}
return input;
}


template<typename T>
T Transpose(T it_begin,T it_end) {
	T runner = it_begin;
	int ArraySize=it_end-it_begin;
	if (ArraySize%2==0){    
		while (runner != it_end) {
			auto temp=*runner;
			auto temp2=*(runner+1);
			*runner=temp2;
			*(runner+1)=temp;
			runner++;
			runner++;
		}
		return runner;
}
	while (runner != it_end-1) {
		auto temp=*runner;
		auto temp2=*(runner+1);
		*runner=temp2;
		*(runner+1)=temp;
		runner++;
		runner++;
	}
	return runner;
}




template<class inputIT,class outputIT , class function>
outputIT Transform(inputIT it_begin,inputIT it_end,outputIT it_new,function func) {
	int ArraySize=it_end-it_begin;
	if (ArraySize%2!=0){
		return it_new;
	}
	outputIT start =it_new;
	inputIT runner = it_begin;
	while (runner != it_end) {
		auto temp=func(*(runner),*(runner+1));
		*start=temp;
		runner++;
		runner++;
		start++;
	}
	return start;
}

