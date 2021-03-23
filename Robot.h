#pragma once
#include <string>
#include <iostream>
using namespace std;

enum commandType {
	WALK,
	STOP,
	JUMP,
};

class Robot
{
private: 
	string _name;
	string result;
public:
	Robot(string name) {
		_name = name;
	}
	~Robot() {}

	static const int COMMAND_WALK = 0;
	static const int COMMAND_STOP = 1;
	static const int COMMAND_JUMP = 2;

	void order(int command) {
//		if (command == 0) {
//		if (command == COMMAND_WALK) {
		if (command == WALK) {
//			cout << _name + " walks." << endl;
			result = _name + " walks.";
		}
//		else if (command == 1) {
//		else if (command == COMMAND_STOP) {
		else if (command == STOP) {
//			cout << _name + " stops." << endl;
			result = _name + " stops.";
		}
//		else if (command == 2) {
//		else if (command == COMMAND_JUMP) {
		else if (command == JUMP) {
			//			cout << _name + " jumps." << endl;
			result = _name + " jumps.";
		}
		else {
//			cout << "Error!" << endl;
			result = "Error!";
		}
	}

	string getResult() {
		return result;
	}
};

class RobotCommand {
private:
	string _name;
public:
	RobotCommand(string name) {
		_name = name;
	}
	string toString() {
		return "[ RobotCommand " + _name + " ]";
	}
};

