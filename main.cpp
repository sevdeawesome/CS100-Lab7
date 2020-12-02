#include <iostream>
#include "base.hpp"
#include "div.h"
#include "pow.h"
#include "add.h"
#include "op.hpp"
#include "sub.h"
#include "rand.h"
#include "mult.h"
#include "factory.h"

int main(int argc, char * argv[]){
	for(int i=0; i<argc;i++){
		std::cout<<"arguments["<<i<<"]: "<<*argv[i]<<endl;
	}	
	Factory* factory = new Factory();
	Base* conversion = factory->parse(argv,argc);
	std::cout<<"Results: "<<conversion->evaluate()<<endl;
	std::cout<<"Stringify: "<<conversion->stringify()<<endl;
	   
}
