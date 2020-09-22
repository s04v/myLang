#pragma once
#include <string>
#include <ast/Expression.h>

class NumberConst : public Expression {
public:
	std::string val;
	NumberConst(std::string v);


	void get_val();

	virtual NodeType get_type();
	void print_token();
};