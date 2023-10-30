#pragma once

class Employee {
	private:
	int _employeeNr;
	public:
	Employee(int employeeNr) : _employeeNr(employeeNr) { };
	~Employee();
	const int &employeeNr = _employeeNr;
};

