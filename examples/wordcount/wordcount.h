#ifndef WORDCOUNT_H_
#define WORDCOUNT_H_

#include <stdint.h>
#include <string>
#include <vector>
#include "Pipes.hh"  
#include "TemplateFactory.hh"  
#include "StringUtils.hh" 
#include <iostream>
using namespace std;

class WordcountMapper : public HadoopPipes::Mapper 
{ 
	public:  
		WordcountMapper(HadoopPipes::TaskContext& context);	
		vector<string> split(const string& src, const string& separator);
		//��дmap����
	  void map(HadoopPipes::MapContext& context);
};  

class WordcountReducer : public HadoopPipes::Reducer 
{  
	public:  
	  WordcountReducer(HadoopPipes::TaskContext& context);
	  //��дreduce����
	  void reduce(HadoopPipes::ReduceContext& context);
};

#endif
