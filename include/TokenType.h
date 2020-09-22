#pragma once

enum TokenType {
	ID,
	NUMBER, NUMBER_HEX,
	FLOAT,
	CHAR,
	STRING,

	LPAREN, RPAREN, // ()
	LBRACE, RBRACE, // { }
	LBRACKET, RBRACKET, // []

	COMMA,
	DOT,
	SEMICOLON,

	QUESTION,

	NEG, NOT, XOR,
	MOD, AND, OR,
	LSHIFT, RSHIFT,


	ADD, SUB, MUL, DIV,
	INC, DEC,


	ASSIGN,
	ADD_ASSIGN,
	SUB_ASSIGN,
	MUL_ASSIGN,
	DIV_ASSIGN,

	MOD_ASSIGN,

	AND_ASSIGN,
	OR_ASSIGN,
	XOR_ASSIGN,

	OR_OR,
	AND_AND,

	EQ,
	NOT_EQ,
	LT, LTEQ,
	GT, GTEQ,


	//keywords
	LET_KEY,
	CONST_KEY,
	STATIC_KEY,
	STRUCT_KEY,
	FUNC_KEY,
	IF_KEY,
	ELSE_KEY,



	



};