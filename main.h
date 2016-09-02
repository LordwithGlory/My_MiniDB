#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <cstring>
#include <vector>
#include <list>
using namespace std;
typedef enum{
	NONE, STRING, INT, DOUBLE, DATE
}dataType;
typedef struct {
	int year;
	int month;
	int day;
}date;
typedef struct{
	int rowNum;//�к�
	vector<string> Data;
}rowData;
typedef struct{
	int fieldNum;//�ֶ����
	string fieldName;//�ֶ�����
	dataType theType;//��������
	int judgeBound;//Լ������
}fieldType;
typedef struct{
	string fieldName;
	string data;
}pairData;//�ֶ������ݵ�һ���Ӧ
typedef struct{
	vector<fieldType> field;
	list<rowData> data;
}table;
void input_Command();
void dealWith_Command(string command);
table openTable(string tableName);
void saveTable(table _theSavingTable);
vector<int> dealWith_Where(table theTable, string where_command);

#endif